// ---------- Example 2 -------------
// Observation: Templates are just patterns used to generate families of functions or classes.
//              Because of this, their definition must not be found in another ".cpp". In this
//              case, we are using an inline file (a header would work as well).

#ifndef DEMOS_EXAMPLE2_INL
#define DEMOS_EXAMPLE2_INL

/**
 * Call "sum_templates" recursively, every time without the first parameter.
 * @param arg1 - extracted from parameter pack
 * @param args - parameter pack. Unpacking it is done by adding ... after its name.
 */
template<typename T, typename... Ts>
auto sum_templates(T arg1, Ts... args) {
    return arg1 + sum_templates(args...);
}
/**
 * Base Case - no elements.
 */
auto sum_templates() {
    return 0;
}

#endif