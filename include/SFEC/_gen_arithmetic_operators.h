/**
 * File: SFEC/_gen_arithmetic_operators.h
 *
 * Description: Defines general macro used for declaring arithmetic operator
 * member SFINAE structs within the SFEC namespace. It should not be used by
 * the end user.
 *
 * Author(s): Piotr Kuszaj (2016)
 */

#ifndef SFEC__GEN_ARITHMETIC_OPERATORS_H_
#define SFEC__GEN_ARITHMETIC_OPERATORS_H_

#include <SFEC/decl_has_function_member.h>

namespace SFEC {

SFEC_declHasOperatorType(operator=,  _gen_assign); // General ssignment
SFEC_declHasOperatorType(operator+,  _gen_add);    // General addition
SFEC_declHasOperatorType(operator-,  _gen_sub);    // General substraction
SFEC_declHasOperatorType(operator*,  _gen_mul);    // General multiplication
SFEC_declHasOperatorType(operator/,  _gen_div);    // General division
SFEC_declHasOperatorType(operator%,  _gen_mod);    // General modulo
SFEC_declHasOperatorType(operator++, _gen_incr);   // General increment
SFEC_declHasOperatorType(operator--, _gen_decr);   // General decrement

} /* SFEC */

#endif /* SFEC__GEN_ARITHMETIC_OPERATORS_H_ */
