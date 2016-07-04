/**
 * File: SFEC/alloc_operators.h
 *
 * Description: Defines macro used for declaring standard (de)allocator
 * operator member SFINAE structs within the SFEC namespace:
 *
 *     has_operator_alloc         <- Allocate
 *     has_operator_alloc_array   <- Allocate array
 *     has_operator_dealloc       <- Deallocate
 *     has_operator_dealloc_array <- Deallocate array
 *
 * Author(s): Piotr Kuszaj (2016)
 */

#ifndef SFEC_ALLOC_OPERATORS_H_
#define SFEC_ALLOC_OPERATORS_H_

#include <SFEC/_gen_alloc_operators.h>
#include <cstdlib>

namespace SFEC {

template <typename T>
using has_operator_alloc         // Allocate
    = has_operator__gen_alloc<T, void*, std::size_t>;

template <typename T>
using has_operator_alloc_array   // Allocate array
    = has_operator__gen_alloc_array<T, void*, std::size_t>;

template <typename T>
using has_operator_dealloc       // Deallocate
    = has_operator__gen_dealloc<T, void, void*>;

template <typename T>
using has_operator_dealloc_array // Deallocate array
    = has_operator__gen_dealloc_array<T, void, void*>;

} /* SFEC */

#endif /* SFEC_ALLOC_OPERATORS_H_ */
