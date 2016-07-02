#ifndef SFEC_MEMBER_LOGICAL_OPERATORS_H_
#define SFEC_MEMBER_LOGICAL_OPERATORS_H_

#include <SFEC/member/_gen_logical_operators.h>

namespace SFEC {
namespace member {

template <typename T, typename Ret, typename Arg>
using has_operator_logical_and // Logical AND
    = has_operator__gen_logical_and<T, Ret, Arg>;

template <typename T, typename Ret, typename Arg>
using has_operator_logical_or  // Logical OR
    = has_operator__gen_logical_or<T, Ret, Arg>;

template <typename T, typename Ret>
using has_operator_logical_not // Logical NOT
    = has_operator__gen_logical_not<T, Ret>;

} /* SFEC::member */
} /* SFEC */

#endif /* SFEC_MEMBER_LOGICAL_OPERATORS_H_ */
