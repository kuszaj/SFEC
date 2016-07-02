#ifndef SFEC_MBMBER__GEN_COMPOUND_ASSIGNMENT_OPERATORS_H_
#define SFEC_MEMBER__GEN_COMPOUND_ASSIGNMENT_OPERATORS_H_

#include <SFEC/member/decl_has_function_member.h>

namespace SFEC {
namespace member {

SFEC_declHasOperatorType(operator+=,  _gen_assign_add);    // Addition assignment
SFEC_declHasOperatorType(operator-=,  _gen_assign_sub);    // Substraction assignment
SFEC_declHasOperatorType(operator*=,  _gen_assign_mul);    // Multiplication assignment
SFEC_declHasOperatorType(operator/=,  _gen_assign_div);    // Division assignment
SFEC_declHasOperatorType(operator%=,  _gen_assign_mod);    // Modulo assignment
SFEC_declHasOperatorType(operator&=,  _gen_assign_and);    // Bitwise AND assignment
SFEC_declHasOperatorType(operator|=,  _gen_assign_or);     // Bitwise OR assignment
SFEC_declHasOperatorType(operator^=,  _gen_assign_xor);    // Bitwise XOR assignment
SFEC_declHasOperatorType(operator<<=, _gen_assign_lshift); // Bitwise left shift assignment
SFEC_declHasOperatorType(operator>>=, _gen_assign_rshift); // Bitwise right shift assignment

} /* SFEC::member */
} /* SFEC */

#endif /* SFEC_MEMBER__GEN_COMPOUND_ASSIGNMENT_OPERATORS_H_ */
