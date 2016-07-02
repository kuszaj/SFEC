#ifndef SFEC_MEMBER__GEN_ARITHMETIC_OPERATORS_H_
#define SFEC_MEMBER__GEN_ARITHMETIC_OPERATORS_H_

#include <SFEC/member/decl_has_function_member.h>

namespace SFEC {
namespace member {

SFEC_declHasOperatorType(operator=,  _gen_assign); // General ssignment
SFEC_declHasOperatorType(operator+,  _gen_add);    // General addition
SFEC_declHasOperatorType(operator-,  _gen_sub);    // General substraction
SFEC_declHasOperatorType(operator*,  _gen_mul);    // General multiplication
SFEC_declHasOperatorType(operator/,  _gen_div);    // General division
SFEC_declHasOperatorType(operator%,  _gen_mod);    // General modulo
SFEC_declHasOperatorType(operator++, _gen_incr);   // General increment
SFEC_declHasOperatorType(operator--, _gen_decr);   // General decrement

} /* SFEC::member */
} /* SFEC */

#endif /* SFEC_MEMBER__GEN_ARITHMETIC_OPERATORS_H_ */
