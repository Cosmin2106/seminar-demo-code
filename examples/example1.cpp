// ---------- Example 1 -------------

/**
 * C89 implementation using the <stdarg.h> library and "va_start", "va_arg", "va_end" macros.
 * Type unsafe, hard to follow, though nice concept.
 * @param n_args - number of arguments included in ellipsis
 * @param ... - packed arguments
 */
int sum_stdarg(int n_args, ...) {
    int s = 0;
    va_list ap;
    va_start(ap, n_args);
    for (int i = 0; i < n_args; i++) {
        s += va_arg(ap, int);
    }
    va_end(ap);
    return s;
}