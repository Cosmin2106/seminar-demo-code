// ---------- Example 3 -------------

#ifndef DEMOS_EXAMPLE3_INL
#define DEMOS_EXAMPLE3_INL

/**
 * C++17 allows us to separate the parameter from the ellipsis with an operator.
 * No base case is required.
 * @param args - parameter pack
 * @return - (... + args) expands to: ((arg1 + arg2) + arg3) + ...
 */
template<typename... Ts>
auto sum_fold(Ts... args) {
    return (... + args);
}

#endif