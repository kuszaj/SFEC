#ifndef SFEC_MEMBER__GEN_DECL_HAS_FUNCTION_MEMBER_H_
#define SFEC_MEMBER__GEN_DECL_HAS_FUNCTION_MEMBER_H_

#include <type_traits>

#define _SFEC_generalDeclHasFunctionMember(FUNCTION, STRUCTNAME)                           \
template <typename T,                                                                      \
          typename Ret = void,                                                             \
          typename ... Args>                                                               \
struct STRUCTNAME {                                                                        \
    template <typename C, typename = Ret>                                                  \
    struct hasMethod                                                                       \
        : std::false_type { };                                                             \
                                                                                           \
    template <typename C>                                                                  \
    struct hasMethod<C, decltype( std::declval<C>().FUNCTION( std::declval<Args>()... ) )> \
        : std::true_type { };                                                              \
                                                                                           \
    constexpr static const bool value = hasMethod<T>::value;                               \
}

#endif /* SFEC_MEMBER__GEN_DECL_HAS_FUNCTION_MEMBER_H_ */
