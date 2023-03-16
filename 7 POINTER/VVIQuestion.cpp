#include <iostream>
//by address
int* solve() {
    int a = 5;
    int* ans = &a;
    return ans;
}

int main() {
    int* ptr = solve();
    std::cout << *ptr << std::endl; // Output: 5
    return 0;
}
/*
Note that since a is a local variable declared within the solve() function, its memory is deallocated when the function returns. Therefore, the pointer returned by solve() is pointing to an invalid memory location once the function has returned. In a real-world scenario, it would be better to allocate memory dynamically using new and return a pointer to the dynamically allocated memory.
*/

//by reference
#include <iostream>

int& solve() {
    static int a = 5; // Make a static variable to avoid returning a reference to a local variable
    return a;
}

int main() {
    int& ref = solve();
    std::cout << ref << std::endl; // Output: 5

    // Modify the value of a through the reference
    ref

