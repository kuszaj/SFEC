#ifndef SFEC_MEMBER__GEN_LOGICAL_OPERATORS_H_
#define SFEC_MEMBER__GEN_LOGICAL_OPERATORS_H_

#include <SFEC/member/decl_has_function_member.h>

namespace SFEC {
namespace member {

SFEC_declHasOperatorType(operator&&, _gen_logical_and); // General logical AND (should not be used)
SFEC_declHasOperatorType(operator||, _gen_logical_or);  // General logical OR (should not be used)
SFEC_declHasOperatorType(operator!,  _gen_logical_not); // General logical NOT (should not be used)

} /* SFEC::member */
} /* SFEC */

#endif /* SFEC_MEMBER__GEN_LOGICAL_OPERATORS_H_ */
