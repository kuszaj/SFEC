#ifndef SFEC_MEMBER_RELATIONAL_OPERATORS_H_
#define SFEC_MEMBER_RELATIONAL_OPERATORS_H_

#include <SFEC/member/_gen_relational_operators.h>

namespace SFEC {
namespace member {

template <typename T, typename Arg>
using has_operator_eq                     // Equal to
    = has_operator__gen_eq<T, bool, Arg>;

template <typename T, typename Arg>
using has_operator_neq                    // Not equal to
    = has_operator__gen_neq<T, bool, Arg>;

template <typename T, typename Arg>
using has_operator_gt                     // Greater than
    = has_operator__gen_gt<T, bool, Arg>;

template <typename T, typename Arg>
using has_operator_lt                     // Less than
    = has_operator__gen_lt<T, bool, Arg>;

template <typename T, typename Arg>
using has_operator_geq                    // Greater than or equal to
    = has_operator__gen_geq<T, bool, Arg>;

template <typename T, typename Arg>
using has_operator_leq                    // Less than or equal to
    = has_operator__gen_leq<T, bool, Arg>;

} /* SFEC::member */
} /* SFEC */

#endif /* SFEC_MEMBER_RELATIONAL_OPERATORS_H_ */
