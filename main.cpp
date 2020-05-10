#include <iostream>
#include "examples/signatures.h"
#include "examples/example1.cpp"
#include "examples/example2.inl"

int main() {
    // Example 1, slide: *n* (<stdarg.h>/<cstdarg> implementation, problems arise)
    std::cout << "1 + 2 + 3 = " << sum_stdarg(3, 1, 2, 3) << '\n';
    std::cout << "1 + 2 + 3.0 = " << sum_stdarg(3, 1, 2, 3.0) << "\n\n";

    // Example 2, slide: *n* (variadic templates implementation, type safety)
    std::cout << "1 + 2 + 3 = " << sum_templates(1, 2, 3) << '\n';
    std::cout << "1 + 2 + 3.0 = " << sum_templates(1, 2, 3.0) << "\n\n";
    return 0;
}