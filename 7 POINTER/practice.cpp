#include <iostream>
using namespace std;

// Function that takes an integer parameter by value
void incrementByValue(int x) {
    x++;
}

// Function that takes an integer parameter by reference
void incrementByReference(int& x) {
    x++;
}

// Function that takes an integer parameter by pointer/address
void incrementByPointer(int* x) {
    (*x)++;
}

// Function that takes an integer parameter by reference-to-pointer
void incrementByReferenceAndPointer(int*& x) {
    x = x + 1;
}

int main() {
    int num = 10;
    int* p = &num;

    // Call the incrementByValue function with num as the argument
    incrementByValue(num);
    cout << "After incrementByValue, num = " << num << endl;

    // Call the incrementByReference function with num as the argument
    incrementByReference(num);
    cout << "After incrementByReference, num = " << num << endl;

    // Call the incrementByPointer function with the address of num as the argument
    incrementByPointer(&num);
    cout << "After incrementByPointer, num = " << num << endl;

    // Call the incrementByReferenceAndPointer function with the pointer to num as the argument
    incrementByReferenceAndPointer(p);
    cout << "After incrementByReferenceAndPointer, num = " << num << endl;

    return 0;
}
