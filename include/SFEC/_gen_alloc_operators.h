/**
 * File: SFEC/_gen_alloc_operators.h
 *
 * Description: Defines general macro used for declaring (de)allocator operator
 * member SFINAE structs within the SFEC namespace. It should not be used by
 * the end user.
 *
 * Author(s): Piotr Kuszaj (2016)
 */

#ifndef SFEC__GEN_ALLOC_OPERATORS_H_
#define SFEC__GEN_ALLOC_OPERATORS_H_

#include <SFEC/decl_has_function_member.h>

namespace SFEC {

SFEC_declHasOperatorType(operator new,    _gen_alloc);           // General allocate (should not be used)
SFEC_declHasOperatorType(operator new[],  _gen_alloc_array);     // General allocate array (should not be used)
SFEC_declHasOperatorType(operator delete, _gen_dealloc);         // General deallocate (should not be used)
SFEC_declHasOperatorType(operator delete[], _gen_dealloc_array); // General deallocate array (should not be used)

} /* SFEC */

#endif /* SFEC__GEN_ALLLOC_OPERATORS_H_ */
