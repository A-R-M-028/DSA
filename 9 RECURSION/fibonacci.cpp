#include <iostream>
using namespace std;

int fib(int n) {
	//base case
    //if 1 term left
    if(n==1){
        return 0;
    }
    //if 2 term left
    if(n==2){
        return 1;
    }
    //here choto poblem is (n-1)&(n-2)
    //recursive relation //RR -> f(n) = f(n-1) + f(n-2)
    int ans=fib(n-1)+fib(n-2);
    return ans;
}

int main() {
    //let fact of 5=120
	int n;
	cout << "Enter the value of n  " << endl;
	cin >> n;
	int ans=fib(n);
	cout <<ans<<endl;

	return 0;
}