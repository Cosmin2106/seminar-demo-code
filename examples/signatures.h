#ifndef DEMOS_SIGNATURES_H
#define DEMOS_SIGNATURES_H

#include <cstdarg>

// Example 1
int sum_stdarg(int, ...);

// Example 2
template<typename T, typename... Ts>
int sum_templates(T, Ts...);
int sum_templates();

#endif