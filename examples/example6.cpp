// ---------- Example 6 -------------
// Simulating fold expressions in C++11

/**
 * The function first determines the most general types of all arguments in the pack and sets it as return type.
 *      (syntax explanation: http://www.cplusplus.com/forum/general/203860/)
 *
 * We know that an array, or every aggregate that behaves like one, can be initialized using a parameter pack.
 *      (e.g.: {vs...} - array containing all elements in vs).
 *
 * Furthermore, we can perform basic operations before the elements are inserted.
 *      (e.g.: {(vs + 1)...} - increments all with one).
 *
 * Alongside operations, variable assignments are also allowed.
 *      (e.g.: {(x = vs + 1)...} - inserts x in array after assigning the new value).
 *
 * Using this knowledge, we can obtain the desired behaviour:
 *      {(x = x + vs) - for every new element, adds its value to x, then inserts x in the array}
 *
 * Since we do not actually need the list itself, we do not assign any variable name. Its type is the type of the
 * result variable, that is, the most general type available. std::initializer_list was chosen since it does not
 * require dynamic allocation, being more efficient than a vector in this case.
 *
 * @tparam Ts - by reference
 */
template<typename... Ts>
auto c11_fold(const Ts&... vs) -> typename std::common_type<Ts...>::type {
    typename std::common_type<Ts...>::type result;
    std::initializer_list<decltype(result)> {(result += vs)...};
    return result;
}