/**
 * File: SFEC/bitwise_operators.h
 *
 * Description: Defines macro used for declaring standard bitwise
 * operator member SFINAE structs within the SFEC namespace:
 *
 *     has_operator_bitwise_not    <- Bitwise NOT
 *     has_operator_bitwise_and    <- Bitwise AND
 *     has_operator_bitwise_or     <- Bitwise OR
 *     has_operator_bitwise_xor    <- Bitwise XOR
 *     has_operator_bitwise_lshift <- Bitwise left shift
 *     has_operator_bitwise_rshift <- Bitwise right shift
 *
 * Author(s): Piotr Kuszaj (2016)
 */

#ifndef SFEC_BITWISE_OPERATORS_H_
#define SFEC_BITWISE_OPERATORS_H_

#include <SFEC/_gen_bitwise_operators.h>

namespace SFEC {

template <typename T, typename Ret>
using has_operator_bitwise_not    // Bitwise NOT
    = has_operator__gen_bitwise_not<T, Ret>;

template <typename T, typename Ret, typename Arg>
using has_operator_bitwise_and    // Bitwise AND
    = has_operator__gen_bitwise_and<T, Ret, Arg>;

template <typename T, typename Ret, typename Arg>
using has_operator_bitwise_or     // Bitwise OR
    = has_operator__gen_bitwise_or<T, Ret, Arg>;

template <typename T, typename Ret, typename Arg>
using has_operator_bitwise_xor    // Bitwise XOR
    = has_operator__gen_bitwise_xor<T, Ret, Arg>;

template <typename T, typename Ret, typename Arg>
using has_operator_bitwise_lshift // Bitwise left shift
    = has_operator__gen_bitwise_lshift<T, Ret, Arg>;

template <typename T, typename Ret, typename Arg>
using has_operator_bitwise_rshift // Bitwise right shift
    = has_operator__gen_bitwise_rshift<T, Ret, Arg>;

} /* SFEC */

#endif /* SFEC_BITWISE_OPERATORS_H_ */
