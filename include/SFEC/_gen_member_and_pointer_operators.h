/**
 * File: SFEC/_gen_member_and_pointer_operators.h
 *
 * Description: Defines general macro used for declaring member and pointer
 * operator member SFINAE structs within the SFEC namespace. It should not be used by
 * the end user.
 *
 * Author(s): Piotr Kuszaj (2016)
 */

#ifndef SFEC__GEN_MEMBER_AND_POINTER_OPERATORS_H_
#define SFEC__GEN_MEMBER_AND_POINTER_OPERATORS_H_

#include <SFEC/decl_has_function_member.h>

namespace SFEC {

SFEC_declHasOperatorType(operator[],   _gen_subscript);            // General subscript
                                                                   // (should not be used)
SFEC_declHasOperatorType(operator*,    _gen_indirection);          // General indirection
                                                                   // (should not be used)
SFEC_declHasOperatorType(operator&,    _gen_address_of);           // General address-of
                                                                   // (should not be used)
SFEC_declHasOperatorType(operator->,   _gen_struct_dereference);   // General structure dereference
                                                                   // (should not be used)
SFEC_declHasOperatorType(operator->*,  _gen_member_select_by_ptm); // General member selected by
                                                                   // pointer-to-member
                                                                   // (should not be used)

} /* SFEC */

#endif /* SFEC__GEN_MEMBER_AND_POINTER_OPERATORS_H_ */
