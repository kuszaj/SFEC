/**
 * File: SFEC/_gen_logical_operators.h
 *
 * Description: Defines general macro used for declaring logical operator
 * member SFINAE structs within the SFEC namespace. It should not be used by
 * the end user.
 *
 * Author(s): Piotr Kuszaj (2016)
 */

#ifndef SFEC__GEN_LOGICAL_OPERATORS_H_
#define SFEC__GEN_LOGICAL_OPERATORS_H_

#include <SFEC/decl_has_function_member.h>

namespace SFEC {

SFEC_declHasOperatorType(operator&&, _gen_logical_and); // General logical AND (should not be used)
SFEC_declHasOperatorType(operator||, _gen_logical_or);  // General logical OR (should not be used)
SFEC_declHasOperatorType(operator!,  _gen_logical_not); // General logical NOT (should not be used)

} /* SFEC */

#endif /* SFEC__GEN_LOGICAL_OPERATORS_H_ */
