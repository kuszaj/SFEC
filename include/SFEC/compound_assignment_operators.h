/**
 * File: SFEC/compound_assignment_operators.h
 *
 * Description: Defines macro used for declaring standard compound
 * assignment operator member SFINAE structs within the SFEC
 * namespace:
 *
 *     has_operator_assign_add    <- Addition assignment
 *     has_operator_assign_sub    <- Substraction assignment
 *     has_operator_assign_mul    <- Multiplication assignment
 *     has_operator_assign_div    <- Division assignment
 *     has_operator_assign_mod    <- Modulo assignment
 *     has_operator_assign_and    <- Bitwise AND assignment
 *     has_operator_assign_or     <- Bitwise OR assignment
 *     has_operator_assign_xor    <- Bitwise XOR assignment
 *     has_operator_assign_lshift <- Bitwise left shift assignment
 *     has_operator_assign_rshift <- Bitwise right shift assignment
 *
 * Author(s): Piotr Kuszaj (2016)
 */

#ifndef SFEC_COMPOUND_ASSIGNMENT_OPERATORS_H_
#define SFEC_COMPOUND_ASSIGNMENT_OPERATORS_H_

#include <SFEC/_gen_compound_assignment_operators.h>

namespace SFEC {

template <typename T, typename Ret, typename Arg>
using has_operator_assign_add // Addition assignment
    = has_operator__gen_assign_add<T, Ret&, Arg>;

template <typename T, typename Ret, typename Arg>
using has_operator_assign_sub // Substraction assignment
    = has_operator__gen_assign_sub<T, Ret&, Arg>;

template <typename T, typename Ret, typename Arg>
using has_operator_assign_mul // Multiplication assignment
    = has_operator__gen_assign_mul<T, Ret&, Arg>;

template <typename T, typename Ret, typename Arg>
using has_operator_assign_div // Division assignment
    = has_operator__gen_assign_div<T, Ret&, Arg>;

template <typename T, typename Ret, typename Arg>
using has_operator_assign_mod // Modulo assignment
    = has_operator__gen_assign_mod<T, Ret&, Arg>;

template <typename T, typename Ret, typename Arg>
using has_operator_assign_and // Bitwise AND assignment
    = has_operator__gen_assign_and<T, Ret&, Arg>;

template <typename T, typename Ret, typename Arg>
using has_operator_assign_or // Bitwise OR assignment
    = has_operator__gen_assign_or<T, Ret&, Arg>;

template <typename T, typename Ret, typename Arg>
using has_operator_assign_xor // Bitwise XOR assignment
    = has_operator__gen_assign_xor<T, Ret&, Arg>;

template <typename T, typename Ret, typename Arg>
using has_operator_assign_lshift // Bitwise left shift assignment
    = has_operator__gen_assign_lshift<T, Ret&, Arg>;

template <typename T, typename Ret, typename Arg>
using has_operator_assign_rshift // Bitwise right shift assignment
    = has_operator__gen_assign_rshift<T, Ret&, Arg>;

} /* SFEC */

#endif /* SFEC_COMPOUND_ASSIGNMENT_OPERATORS_H_ */
