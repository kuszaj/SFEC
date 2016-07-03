/**
 * File: SFEC/decl_has_function_member.h
 *
 * Description: Defines macro used for declaring function and operator member
 * SFINAE structs. All structs are named as "has_function_member_<function name>"
 * or "has_operator_member_<chosen name suffix>".
 *
 * Author(s): Piotr Kuszaj (2016)
 */

#ifndef SFEC_DECL_HAS_FUNCTION_MEMBER_H_
#define SFEC_DECL_HAS_FUNCTION_MEMBER_H_

#include <SFEC/_gen_decl_has_function_member.h>

#define SFEC_declHasFunctionMemberType(FUNCTION)                                 \
    _SFEC_generalDeclHasFunctionMember(FUNCTION, has_function_member_##FUNCTION)

#define SFEC_declHasOperatorType(OPERATOR, NAMESUFFIX)                           \
    _SFEC_generalDeclHasFunctionMember(OPERATOR, has_operator_##NAMESUFFIX)

#endif /* SFEC_DECL_HAS_FUNCTION_MEMBER_H_ */
