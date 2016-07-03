/**
 * File: SFEC/member_and_pointer_operators.h
 *
 * Description: Defines macro used for declaring standard logical
 * operator member SFINAE structs within the SFEC namespace:
 *
 *     has_operator_subscript            <- Subscript
 *     has_operator_indirection          <- Indirection
 *     has_operator_address_of           <- Address-of
 *     has_operator_struct_dereference   <- Structure dereference
 *     has_operator_member_select_by_ptm <- Member selected by pointer-to-member
 *
 * Author(s): Piotr Kuszaj (2016)
 */

#ifndef SFEC_MEMBER_AND_POINTER_OPERATORS_H_
#define SFEC_MEMBER_AND_POINTER_OPERATORS_H_

#include <SFEC/_gen_member_and_pointer_operators.h>

namespace SFEC {

template <typename T, typename Ret, typename Arg>
using has_operator_subscript             // Subscript
    = has_operator__gen_subscript<T, Ret, Arg>;

template <typename T, typename Ret>
using has_operator_indirection           // Indirection
    = has_operator__gen_indirection<T, Ret>;

template <typename T, typename Ret>
using has_operator_address_of            // Address-of
    = has_operator__gen_address_of<T, Ret>;

template <typename T, typename Ret>
using has_operator_struct_dereference    // Structure dereference
    = has_operator__gen_struct_dereference<T, Ret>;

template <typename T, typename Ret, typename Arg>
using has_operator_member_select_by_ptm  // Member selected by pointer-to-member
    = has_operator__gen_member_select_by_ptm<T, Ret, Arg>;


} /* SFEC */

#endif /* SFEC_MEMBER_AND_POINTER_OPERATORS_H_ */
