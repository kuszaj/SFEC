/**
 * File: SFEC/member/constructor.h
 *
 * Description: Defines macro used for declaring constructor member SFINAE
 * structs within the SFEC::member namespace:
 *
 *     has_constructor         <- general constructor, with user-defined
 *                                arguments
 *     has_default_constructor <- default constructor
 *     has_copy_constructor    <- copy constructor
 *     has_move_constructor    <- move constructor
 *
 * Author(s): Piotr Kuszaj (2016)
 */

#ifndef SFEC_MEMBER_HAS_CONSTRUCTOR_H_
#define SFEC_MEMBER_HAS_CONSTRUCTOR_H_

#include <type_traits>

namespace SFEC {
namespace member {

template <typename T = void,
          typename ... Args>
struct has_constructor {
    template <typename C, typename = C>
    struct hasFunction
        : std::false_type { };

    template <typename C>
    struct hasFunction<C, decltype( C( std::declval<Args>()... ) )>
        : std::true_type { };

    constexpr static const bool value = hasFunction<T>::value;
};

template <typename T>
using has_default_constructor
    = has_constructor<T>;

template <typename T>
using has_copy_constructor
    = has_constructor<T, const T&>;

template <typename T>
using has_move_constructor
    = has_constructor<T, T&&>;

} /* SFEC::member */
} /* SFEC */

#endif /* SFEC_MEMBER_HAS_CONSTRUCTOR_H_ */
