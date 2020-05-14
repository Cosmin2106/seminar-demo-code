#include <iostream>
#include "examples/signatures.h"
#include "examples/example1.cpp"
#include "examples/example2.inl"
#include "examples/example3.inl"
#include "examples/example4.cpp"

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

    // Example 4, slide *x* (fold expressions and classes, notice order of types)
    Master<C, A> m1{};
    Master<A, B, C> m2{};
    m1.print_msg();
    m2.print_msg();

    return 0;
}