/**
 * File: SFEC/other_operators.h
 *
 * Description: Defines macro used for declaring standard
 * operator member SFINAE structs (that were not defined in
 * any other header file) within the SFEC namespace:
 *
 *     has_operator_function_call <- Function call
 *
 * Author(s): Piotr Kuszaj (2016)
 */

#ifndef SFEC_OTHER_OPERATORS_H_
#define SFEC_OTHER_OPERATORS_H_

#include <SFEC/decl_has_function_member.h>

namespace SFEC {

SFEC_declHasOperatorType(operator(), function_call); // Function call

} /* SFEC */

#endif /* SFEC_OTHER_OPERATORS_H_ */
