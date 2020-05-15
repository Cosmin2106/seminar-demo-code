// ---------- Example 4 -------------
// Executes at compile time. No if-statements needed.

#ifndef DEMOS_EXAMPLE4_INL
#define DEMOS_EXAMPLE4_INL

/**
 * The most general case. Takes into account the first two types, performs an 'and'
 * operations and instantiates the struct recursively for the remaining types, without the first.
 * For the specializations to work, the general case must be declared first.
 */
template<typename T, typename U, typename... Vs>
struct all_same {
    static constexpr bool value = all_same<T, U>::value && all_same<U, Vs...>::value;
};

/**
 * Specialization 2: If the compiler cannot use one type for instantiation, it will
 * enter this case (a more general specialization). This way, we are certain that
 * the types differ. Return false.
 */
template<typename T, typename U>
struct all_same<T, U> {
    static constexpr bool value = std::false_type();
};

/**
 * Specialization 1: First to be checked. If the compiler only needs one type T
 * for an instantiation with two elements, those elements will be of the same type.
 * Return true immediately.
 */
template<typename T>
struct all_same<T, T> {
    static constexpr bool value = std::true_type();
};

#endif