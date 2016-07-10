/**
 * File: 01_simple_check.cpp
 *
 * Description: Example showing basic usage of SFEC library.
 *
 * Author(s): Piotr Kuszaj (2016)
 */

#include <iostream>
#include <iomanip>
#include <SFEC/SFEC.h>

/**
 * Example class
 */
class C {
    private:
        int cPriv;

    public:
        int cPub;

        // Default constructor
        C () {
            cPriv = 0;
            cPub  = 0;
        }

        // Copy constructor (only declaration)
        C (const C&);

        // According to C++11 standard, move constructor should be
        // declared implicitly, however since it has no implementation,
        // it won't be useable (although detectable, using SFEC constructor
        // move structure).

        // Custom constructor
        C (const int& priv, const int& pub) {
            cPriv = priv;
            cPub  = pub;
        }

        // cPriv accessor
        int getCPriv() { return cPriv; }

        // cPriv mutator
        void setCPriv(const int& priv) { cPriv = priv; }

        // Since publicMember is accessible and mutable from the outside,
        // there's no reason to declare its accessor and mutator.
};

/**
 * We need to declare a couple of template structures that will
 * help us  with checking if various data & function members are
 * declared.
 */

SFEC_declHasDataMemberType(cPub);         // has_data_member_cPub
SFEC_declHasDataMemberType(cPriv);        // has_data_member_cPriv

SFEC_declHasFunctionMemberType(getCPriv); // has_function_member_getCPriv
SFEC_declHasFunctionMemberType(setCPriv); // has_function_member_setCPriv
SFEC_declHasFunctionMemberType(getCPub);  // has_function_member_getCPub
SFEC_declHasFunctionMemberType(setCPub);  // has_function_member_setCPub

/**
 * Helper function for printing formatted lines.
 */
void printLine(const char* str, bool value) {
    std::cout << "  "
              << std::left << std::setw(30) << std::setfill('.')
              << str
              << value << std::endl;
}

int main () {
    std::cout << std::boolalpha;

    std::cout << "===================" << std::endl;
    std::cout << "= Class C members =" << std::endl;
    std::cout << "===================" << std::endl;

    /**
     * Data members structures were defined outside the SFEC namespace.
     * Since private members are not accessible outside of the class,
     * has_data_member_cPriv<C, int> should return false value, even though
     * member is defined.
     */
    std::cout << "Data members" << std::endl;
    printLine("cPub (int)",  has_data_member_cPub<C, int>::value);  // true
    printLine("cPub (char)", has_data_member_cPub<C, char>::value); // false
    printLine("cPriv (int)", has_data_member_cPriv<C, int>::value); // false
    std::cout << std::endl;

    /**
     * Constructor structures are defined inside SFEC namespace in SFEC/constructor.h.
     * SFEC structures will detect not only implemented function, but also those which were
     * just declared (by the user or implicitly by the compiler).
     * Since int can be casted on const int&, C(int, int) and C(int&, int&) will be interpreted
     * as C(const int&, const int&).
     */
    std::cout << "Constructors" << std::endl;
    printLine("Default",    SFEC::has_default_constructor<C>::value);     // true
    printLine("Copy",       SFEC::has_copy_constructor<C>::value);        // true
    printLine("Move",       SFEC::has_move_constructor<C>::value);        // true
    printLine("int",        SFEC::has_constructor<C, int>::value);        // false
    printLine("int, int",   SFEC::has_constructor<C, int, int>::value);   // true
    printLine("int&, int&", SFEC::has_constructor<C, int&, int&>::value); // true
    std::cout << std::endl;

    /**
     * Detecting function members require to pass its return type and list of argument types.
     * This allows to detect function members with the name but with varying input and output types.
     */
    std::cout << "Other function members" << std::endl;
    printLine("int getCPriv()",          has_function_member_getCPriv<C, int>::value);            // true
    printLine("long getCPriv()",         has_function_member_getCPriv<C, long>::value);           // false
    printLine("int getCPub()",           has_function_member_getCPub<C, int>::value);             // false
    printLine("void setCPriv(int)",      has_function_member_setCPriv<C, void, int>::value);      // true
    printLine("void setCPriv(int, int)", has_function_member_setCPriv<C, void, int, int>::value); // false
    printLine("void setCPub(int)",       has_function_member_setCPub<C, void, int>::value);       // false
    std::cout << std::endl;

    return 0;
}
