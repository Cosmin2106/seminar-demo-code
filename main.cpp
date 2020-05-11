#include <iostream>
#include "examples/signatures.h"
#include "examples/example1.cpp"
#include "examples/example2.inl"
#include "examples/example3.inl"

int main() {
    // Example 1, slide: 3 (<stdarg.h>/<cstdarg> implementation, problems arise)
    std::cout << "1 + 2 + 3 = " << sum_stdarg(3, 1, 2, 3) << '\n';
    std::cout << "1 + 2 + 3.0 = " << sum_stdarg(3, 1, 2, 3.0) << "\n\n";

    // Example 2, slide: 12 (variadic templates implementation, type safety)
    std::cout << "1 + 2 + 3 = " << sum_templates(1, 2, 3) << '\n';
    std::cout << "1 + 2 + 3.0 = " << sum_templates(1, 2, 3.0) << "\n\n";

    // Example 3, slide *x* (fold expressions implementation)
    std::cout << "1 + 2 + 3 = " << sum_fold(1, 2, 3) << '\n';
    std::cout << "1 + 2 + 3.0 = " << sum_fold(1, 2, 3.0) << "\n\n";

    return 0;
}