#include <iostream>
using namespace std;

void printCounting(int n) {
    // base case
    if (n == 0) {
        return;
    }
    // recursive relation
    //here dont write return  printCounting(n - 1);, then cout will not execute
    printCounting(n - 1);
    // processing
    cout << n << " ";

    // // processing
    // cout << n << " ";
    // // recursive relation
    // printCounting(n - 1);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    printCounting(n);
    cout << endl;
    return 0;
}
