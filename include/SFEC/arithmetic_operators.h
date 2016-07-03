/**
 * File: SFEC/arithmetic_operators.h
 *
 * Description: Defines macro used for declaring standard arithmetic
 * operator member SFINAE structs within the SFEC namespace:
 *
 *     has_operator_assign       <- Assignment
 *     has_operator_add          <- Addition
 *     has_operator_sub          <- Substration
 *     has_operator_mul          <- Multiplication
 *     has_operator_div          <- Division
 *     has_operator_mod          <- Modulo
 *     has_operator_unary_plus   <- Unary plus
 *     has_operator_unary_minus  <- Unary minus
 *     has_operator_incr_prefix  <- Increment (prefix)
 *     has_operator_incr_postfix <- Increment (postfix)
 *     has_operator_decr_prefix  <- Decrement (prefix)
 *     has_operator_decr_postfix <- Decrement (postfix)
 *
 * Author(s): Piotr Kuszaj (2016)
 */

#ifndef SFEC_ARITHMETIC_OPERATORS_H_
#define SFEC_ARITHMETIC_OPERATORS_H_

#include <SFEC/_gen_arithmetic_operators.h>

namespace SFEC {

template <typename T, typename Ret, typename Arg>
using has_operator_assign       // Assignment
    = has_operator__gen_assign<T, Ret, Arg>;

template <typename T, typename Ret, typename Arg>
using has_operator_add          // Addition
    = has_operator__gen_add<T, Ret, Arg>;

template <typename T, typename Ret, typename Arg>
using has_operator_sub          // Substraction
    = has_operator__gen_sub<T, Ret, Arg>;

template <typename T, typename Ret, typename Arg>
using has_operator_mul          // Multiplication
    = has_operator__gen_mul<T, Ret, Arg>;

template <typename T, typename Ret, typename Arg>
using has_operator_div          // Division
    = has_operator__gen_div<T, Ret, Arg>;

template <typename T, typename Ret, typename Arg>
using has_operator_mod          // Modulo
    = has_operator__gen_mod<T, Ret, Arg>;

template <typename T, typename Ret>
using has_operator_unary_plus   // Unary plus
    = has_operator__gen_add<T, Ret>;

template <typename T, typename Ret>
using has_operator_unary_minus  // Unary minus
    = has_operator__gen_sub<T, Ret>;

template <typename T, typename Ret>
using has_operator_incr_prefix  // Increment (prefix)
    = has_operator__gen_incr<T, Ret&>;

template <typename T, typename Ret>
using has_operator_incr_postfix // Increment (postfix)
    = has_operator__gen_incr<T, Ret, int>;

template <typename T, typename Ret>
using has_operator_decr_prefix  // Decrement (prefix)
    = has_operator__gen_decr<T, Ret&>;

template <typename T, typename Ret>
using has_operator_decr_postfix // Decrement (postfix)
    = has_operator__gen_decr<T, Ret, int>;

} /* SFEC */

#endif /* SFEC_ARITHMETIC_OPERATORS_H_ */
