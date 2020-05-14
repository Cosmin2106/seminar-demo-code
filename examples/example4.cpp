// ---------- Example 3 -------------
// Observation: In this examples we use structs instead of classes, because structs have default public
//              members and we are working with simple data structures. Classes would work identically.

struct A {
    void print_msg() {
        std::cout << "A says hi!\n";
    }
};
struct B {
    void print_msg() {
        std::cout << "B says hi!\n";
    }
};
struct C {
    void print_msg() {
        std::cout << "C says hi!\n";
    }
};

/**
 * Yet another C++17 implementation. Master inherits an unknown number of
 * classes/structs that have a public function named 'print_msg', then
 * calls it for every inherited member.
 */
template<typename... Bases>
struct Master: public Bases... {
    void print_msg() {
        std::cout << '\n';
        (..., Bases::print_msg());  // expansion: Base1::print_msg(), Base2::print_msg(), ...
    }
};