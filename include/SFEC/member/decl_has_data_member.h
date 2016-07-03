#ifndef SFEC_MEMBER_DECL_HAS_DATA_MEMBER_H_
#define SFEC_MEMBER_DECL_HAS_DATA_MEMBER_H_

#include <type_traits>

#define SFEC_declHasDataMemberType(MEMBER)                    \
template <typename T,                                         \
          typename MType = void>                              \
struct has_data_member_##MEMBER {                             \
    template <typename C, typename = MType>                   \
    struct hasMethod                                          \
        : std::false_type { };                                \
                                                              \
    template <typename C>                                     \
    struct hasMethod<C, decltype( std::declval<C>().MEMBER )> \
        : std::true_type { };                                 \
                                                              \
    constexpr static const bool value = hasMethod<T>::value;  \
}

#endif /* SFEC_MEMBER_DECL_HAS_DATA_MEMBER_H_ */
