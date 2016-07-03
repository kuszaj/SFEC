/**
 * File: SFEC/relational_operators.h
 *
 * Description: Defines macro used for declaring standard relational
 * operator member SFINAE structs within the SFEC namespace:
 *
 *     has_operator_eq  <- Equal to
 *     has_operator_neq <- Not equal to
 *     has_operator_gt  <- Greater than
 *     has_operator_lt  <- Less than
 *     has_operator_geq <- Greater than or equal to
 *     has_operator_leq <- Less than or equal to
 *
 * Author(s): Piotr Kuszaj (2016)
 */

#ifndef SFEC_RELATIONAL_OPERATORS_H_
#define SFEC_RELATIONAL_OPERATORS_H_

#include <SFEC/_gen_relational_operators.h>

namespace SFEC {

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

} /* SFEC */

#endif /* SFEC_RELATIONAL_OPERATORS_H_ */
