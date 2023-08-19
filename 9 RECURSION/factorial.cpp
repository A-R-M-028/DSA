#include <iostream>
using namespace std;

int fact(int n) {
	//base case
    if(n==1) return 1;
    //recursive relation
    int ans=n*fact(n-1);

}

int main() {
    //let fact of 5=120
	int n;
	cout << "Enter the value of n  " << endl;
	cin >> n;
	int ans=fact(n);
	cout <<ans<<endl;

	return 0;
}