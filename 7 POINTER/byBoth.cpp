#include <iostream>
using namespace std;

void swap(int* x, int& y) {
  int temp = *x;
  *x = y;
  y = temp;
}
//no need use of * in referende
//but & is needed in pointer to change the value
int main() {
  int a = 5, b = 10;
  cout << "Before swap: a = " << a << ", b = " << b << endl;
  swap(&a, b);
  cout << "After swap: a = " << a << ", b = " << b << endl;
  return 0;
}
