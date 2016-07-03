/**
 * File: SFEC/member/_gen_bitwise_operators.h
 *
 * Description: Defines general macro used for declaring bitwise operator
 * member SFINAE structs within the SFEC::member namespace. It should not be used by
 * the end user.
 *
 * Author(s): Piotr Kuszaj (2016)
 */

#ifndef SFEC_MEMBER__GEN_BITWISE_OPERATORS_H_
#define SFEC_MEMBER__GEN_BITWISE_OPERATORS_H_

#include <SFEC/member/decl_has_function_member.h>

namespace SFEC {
namespace member {

SFEC_declHasOperatorType(operator~,  _gen_bitwise_not);    // General bitwise NOT (should not be used)
SFEC_declHasOperatorType(operator&,  _gen_bitwise_and);    // General bitwise AND (should not be used)
SFEC_declHasOperatorType(operator|,  _gen_bitwise_or);     // General bitwise OR (should not be used)
SFEC_declHasOperatorType(operator^,  _gen_bitwise_xor);    // General bitwise XOR (should not be used)
SFEC_declHasOperatorType(operator<<, _gen_bitwise_lshift); // General bitwise left shift (should not be used)
SFEC_declHasOperatorType(operator>>, _gen_bitwise_rshift); // General bitwise right shift (should not be used)

} /* SFEC::member */
} /* SFEC */

#endif /* SFEC_MEMBER__GEN_BITWISE_OPERATORS_H_ */
