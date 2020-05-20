#include <iostream>

#include "examples/signatures.h"
#include "examples/example1.cpp"
#include "examples/example2.inl"
#include "examples/example3.inl"
#include "examples/example4.cpp"
#include "examples/example5.inl"
#include "examples/example6.cpp"


int main() {
    // Example 1, slide: 3 (<stdarg.h>/<cstdarg> implementation, problems arise)
    std::cout << "1 + 2 + 3 = " << sum_stdarg(3, 1, 2, 3) << '\n';
    std::cout << "1 + 2 + 3.0 = " << sum_stdarg(3, 1, 2, 3.0) << "\n\n";

    // Example 2, slide: 12 (variadic templates implementation, type safety)
    std::cout << "1 + 2 + 3 = " << sum_templates(1, 2, 3) << '\n';
    std::cout << "1 + 2 + 3.0 = " << sum_templates(1, 2, 3.0) << "\n\n";

    // Example 3, slide 14 (fold expressions implementation)
    std::cout << "1 + 2 + 3 = " << sum_fold(1, 2, 3) << '\n';
    std::cout << "1 + 2 + 3.0 = " << sum_fold(1, 2, 3.0) << "\n\n";

    // Example 4, slide 22 (fold expressions and classes, notice order of types)
    Master<C, A> m1{};
    Master<A, B, C> m2{};
    m1.print_msg();
    m2.print_msg();
    std::cout << '\n';


    /* Bonus - Some neat tricks */

    // Example 5 (modify std::is_same to accept an undetermined number of types)
    auto a = 2; auto b = 6; auto c = 12.1; auto d = 21;
    std::cout << "C++11, are all types identical? " << (all_same_c11<decltype(a), decltype(b), decltype(d)>::value ? "true" : "false") << '\n';
    std::cout << "C++11, are all types identical? " << (all_same_c11<decltype(a), decltype(b), decltype(c), decltype(d)>::value ? "true" : "false") << "\n\n";
    std::cout << "C++17, are all types identical? " << (all_same_c17<decltype(a), decltype(b), decltype(d)>::value ? "true" : "false") << '\n';
    std::cout << "C++17, are all types identical? " << (all_same_c17<decltype(a), decltype(b), decltype(c), decltype(d)>::value ? "true" : "false") << "\n\n";

    // Example 6 (simulate variadic templates in C++11, explained)
    std::cout << "1 + 2 + 3.0 = " << c11_fold(1, 2, 3.0) << '\n';

    return 0;
}