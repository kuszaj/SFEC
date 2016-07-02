#ifndef SFEC_MEMBER_DECL_HAS_FUNCTION_MEMBER_H_
#define SFEC_MEMBER_DECL_HAS_FUNCTION_MEMBER_H_

#include <SFEC/member/_gen_decl_has_function_member.h>

#define SFEC_declHasFunctionMemberType(FUNCTION)                                 \
    _SFEC_generalDeclHasFunctionMember(FUNCTION, has_function_member_##FUNCTION)

#define SFEC_declHasOperatorType(OPERATOR, NAMESUFFIX)                           \
    _SFEC_generalDeclHasFunctionMember(OPERATOR, has_operator_##NAMESUFFIX)

#endif /* SFEC_MEMBER_DECL_HAS_FUNCTION_MEMBER_H_ */
