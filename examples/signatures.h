#ifndef DEMOS_SIGNATURES_H
#define DEMOS_SIGNATURES_H

#include <cstdarg>

// Example 1
auto sum_stdarg(int, ...);

// Example 2
template<typename T, typename... Ts>
auto sum_templates(T, Ts...);
auto sum_templates();

// Example 3
template<typename... Ts>
auto sum_fold(Ts...);

#endif