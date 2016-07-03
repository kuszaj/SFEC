/**
 * File: SFEC/logical_operators.h
 *
 * Description: Defines macro used for declaring standard logical
 * operator member SFINAE structs within the SFEC namespace:
 *
 *     has_operator_logical_and    <- Logical AND
 *     has_operator_logical_or     <- Logical OR
 *     has_operator_logical_not    <- Logical NOT
 *
 * Author(s): Piotr Kuszaj (2016)
 */

#ifndef SFEC_LOGICAL_OPERATORS_H_
#define SFEC_LOGICAL_OPERATORS_H_

#include <SFEC/_gen_logical_operators.h>

namespace SFEC {

template <typename T, typename Ret, typename Arg>
using has_operator_logical_and // Logical AND
    = has_operator__gen_logical_and<T, Ret, Arg>;

template <typename T, typename Ret, typename Arg>
using has_operator_logical_or  // Logical OR
    = has_operator__gen_logical_or<T, Ret, Arg>;

template <typename T, typename Ret>
using has_operator_logical_not // Logical NOT
    = has_operator__gen_logical_not<T, Ret>;

} /* SFEC */

#endif /* SFEC_LOGICAL_OPERATORS_H_ */
