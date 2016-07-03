/**
 * File: SFEC/member/_gen_relational_operators.h
 *
 * Description: Defines general macro used for declaring relational operator
 * member SFINAE structs within the SFEC::member namespace. It should not be used by
 * the end user.
 *
 * Author(s): Piotr Kuszaj (2016)
 */

#ifndef SFEC_MEMBER__GEN_RELATIONAL_OPERATORS_H_
#define SFEC_MEMBER__GEN_RELATIONAL_OPERATORS_H_

#include <SFEC/member/decl_has_function_member.h>

namespace SFEC {
namespace member {

SFEC_declHasOperatorType(operator==, _gen_eq);  // General equal to (should not be used)
SFEC_declHasOperatorType(operator!=, _gen_neq); // General not equal to (should not be used)
SFEC_declHasOperatorType(operator>,  _gen_gt);  // General greater than (should not be used)
SFEC_declHasOperatorType(operator<,  _gen_lt);  // General less than (should not be used)
SFEC_declHasOperatorType(operator>=, _gen_geq); // General greater than or equal to (should not be used)
SFEC_declHasOperatorType(operator<=, _gen_leq); // General less than or equal to (should not be used)

} /* SFEC::member */
} /* SFEC */

#endif /* SFEC_MEMBER__GEN_RELATIONAL_OPERATORS_H_ */
