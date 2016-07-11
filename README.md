# SFEC
**SFEC** (**S**FINAE **F**or **E**asy **C**heck) is a simple header-only framework in C++ for checking class membership for various data objects and functions.

## SFINAE
All of its functionality is based on **SFINAE** techniques (_**S**ubstitution **F**ailure **I**s **N**ot **A**n **E**rror_) introduced by [David Vandervoorde](https://www.google.com/#tbs=bks:1&q=isbn:0201734842). In normal situation, trying to call non-existent class member by its name will result in compilation error. However, by utilizing C++ polymorphism membership can be checked during compilation without aborting building process. This simple library attempts to provide a general tools for declaring template structures, which can be used for automatic membership testing.

# Installation
Since library is header-only, you can simply copy contains of `include` directory into your include search path or by adding `-I<path/to/SFEC>` to your compiler flags.

You can also use provided ``Makefile:

```bash
$ make install # will copy include/SFEC to /usr/local/include
```
or
```bash
$ make install INSTALLDIR=/custom/path # will copy include/SFEC to /custom/path
```

# Usage
TODO

## Example
```cpp
/**
 * File: main.cpp
 */

// Main header containing all SFEC library
#include <SFEC/SFEC.h>

#include <iostream> // std::cout, std::endl, std::boolalpha

// Tested class
class C {
    public:
        int x;
        int func();
        int func(long a);

    private:
        int y;
};

SFEC_declHasDataMemberType(x);        // declares has_data_member_x
SFEC_declHasDataMemberType(y);        // declares has_data_member_y

SFEC_declHasFunctionMemberType(func); // declares has_function_member_func

int main () {
    std::cout << std::boolalpha;

    // True, since C has public data member 'x' of type int
    std::cout << has_data_member_x<C, int>::value  << std::endl;
    // False, since C has no public data member 'x' of type long
    std::cout << has_data_member_x<C, long>::value << std::endl;
    // False, since C data member 'x' of type int is private
    std::cout << has_data_member_y<C, int>::value  << std::endl;

    std::cout << std::endl;

    // True, since C has public function member 'func' that retuns int
    // and takes no arguments
    std::cout << has_function_member_func<C, int>::value       << std::endl;
    // True, since C has public function member 'func' that retuns int
    // and takes a single argument of type long
    std::cout << has_function_member_func<C, int, long>::value << std::endl;
    // False, since C has no public function member 'func' that retuns int
    // and takes no arguments
    std::cout << has_function_member_func<C, long>::value      << std::endl;

    return 0;
}
```

```bash
$ g++ -std=c++11 -o main main.cpp
$ ./main
true
false
false

true
true
false
```

For more examples, please refer to `examples` directory. You can also run `make` or `make examples` to automatically build them in `examples/build`.

# Licence
SFEC is distributed under the MIT licence, included in `LICENCE` file.

