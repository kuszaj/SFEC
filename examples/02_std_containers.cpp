/**
 * File: 02_std_containers.cpp
 *
 * Description: Example of automatic test checking, which
 * member functions are defined for various STD containers.
 *
 * Author(s): Piotr Kuszaj (2016)
 */

#include <unordered_map> // std::unordered_map
#include <list>          // std::list
#include <string>        // std::string

#include <memory>        // std::unique_ptr
#include <fstream>       // std::ostream
#include <iostream>      // std::cout
#include <iomanip>       // std::setw, std::setfill

#include <SFEC/SFEC.h>   // SFEC_declHasFunctionMemberType

/**
 * Containers
 */
#include <array>
#include <deque>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>

using namespace std;

/**
 * Class for testing container function members.
 */
template <class Container>
class ContainerTest {
    private:
        // Map container with test's results
        unordered_map< string, bool > m_report;

        // List container with map key order
        list< string > m_order;

        // Declaring function member structures used in automatic test
        SFEC_declHasFunctionMemberType(size);       // has_function_member_size
        SFEC_declHasFunctionMemberType(empty);      // has_function_member_empty
        SFEC_declHasFunctionMemberType(push_back);  // has_function_member_push_back
        SFEC_declHasFunctionMemberType(push_front); // has_function_member_push_front
        SFEC_declHasFunctionMemberType(pop_back);   // has_function_member_pop_back
        SFEC_declHasFunctionMemberType(pop_front);  // has_function_member_pop_front
        SFEC_declHasFunctionMemberType(clear);      // has_function_member_clear
        SFEC_declHasFunctionMemberType(swap);       // has_function_member_swap
        SFEC_declHasFunctionMemberType(sort);       // has_function_member_sort
        SFEC_declHasFunctionMemberType(reverse);    // has_function_member_reverse

    public:
        // Default constructor
        ContainerTest();

        // Lshift operator for passing test report to
        // an ostream object.
        template <class _Container>
        friend
        ostream& operator<<(ostream& os,
                            const ContainerTest<_Container>& ct);
};

/**
 * Default constructor
 * Initializes m_report map, which is used in generating function
 * membership report.
 */
template <class Container>
ContainerTest<Container>::ContainerTest() {
    // size
    m_order.push_back("size");
    m_report["size"] =
        has_function_member_size<Container,
                                 typename Container::size_type>::value;

    // empty
    m_order.push_back("empty");
    m_report["empty"] =
        has_function_member_empty<Container,
                                  bool>::value;

    // push_back
    m_order.push_back("push_back");
    m_report["push_back"] =
        has_function_member_push_back<Container,
                                      void,
                                      typename Container::value_type>::value;

    // push_front
    m_order.push_back("push_front");
    m_report["push_front"] =
        has_function_member_push_front<Container,
                                       void,
                                       typename Container::value_type>::value;

    // pop_back
    m_order.push_back("pop_back");
    m_report["pop_back"] =
        has_function_member_pop_back<Container>::value;

    // push_front
    m_order.push_back("pop_front");
    m_report["pop_front"] =
        has_function_member_pop_front<Container>::value;

    // clear
    m_order.push_back("clear");
    m_report["clear"] =
        has_function_member_clear<Container>::value;

    // swap
    m_order.push_back("swap");
    m_report["swap"] =
        has_function_member_swap<Container,
                                 void,
                                 Container&>::value;

    // sort
    m_order.push_back("sort");
    m_report["sort"] =
        has_function_member_sort<Container>::value;

    // reverse
    m_order.push_back("reverse");
    m_report["reverse"] =
        has_function_member_reverse<Container>::value;
}

/**
 * Operator for passing test report to an ostream object
 */
template <class _Container>
ostream&
operator<<(ostream& os,
           const ContainerTest<_Container>& ct) {
    // Print bool value for every map key
    for (auto const & key : ct.m_order) {
        // Formatting
        os << left << setw(15) << setfill(' ');

        // Function mamber name
        os << key;

        // Print if container has defined function
        // member
        if ( ct.m_report.at(key) ) {
            os << "yes";
        } else {
            os << "no";
        }

        os << endl;
    }

    return os;
}

int main (int argc, char **argv) {
    // Report filename
    string reportFilename;
    if (argc > 1) {
        reportFilename = argv[1];
    } else {
        // Default report filename
        reportFilename = "02_std_containers.log";
    }

    // Output file with report data
    ofstream output;
    output.open(reportFilename);

    ////
    // Declaring ContainerTest objects for
    // various std containers
    ////

    // Array
    ContainerTest<array<int,0> > ctArray;
    // Deque
    ContainerTest<deque<int> >   ctDeque;
    // List
    ContainerTest<list<int> >    ctList;
    // Map
    ContainerTest<map<int,int> > ctMap;
    // Queue
    ContainerTest<queue<int> >   ctQueue;
    // Set
    ContainerTest<set<int> >     ctSet;
    // Stack
    ContainerTest<stack<int> >   ctStack;
    // Vector
    ContainerTest<vector<int> >  ctVector;

    // Saving reports in output file
    output << "== Array =="  << endl << ctArray  << endl;
    output << "== Deque =="  << endl << ctDeque  << endl;
    output << "== List =="   << endl << ctList   << endl;
    output << "== Map =="    << endl << ctMap    << endl;
    output << "== Queue =="  << endl << ctQueue  << endl;
    output << "== Set =="    << endl << ctSet    << endl;
    output << "== Stack =="  << endl << ctStack  << endl;
    output << "== Vector ==" << endl << ctVector << endl;

    cout << "Saved in " << reportFilename << endl;

    return 0;
}
