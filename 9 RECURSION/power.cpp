#include <iostream>
using namespace std;

int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else {
        return base * power(base, exponent - 1);
    }
}

int main() {
    //let 2^5
	int n;int num=2;
	cout << "Enter the value of n  " << endl;
	cin >> n;
	int ans=power(num,n);
	cout <<ans<<endl;

	return 0;
}