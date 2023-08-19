#include <iostream>
using namespace std;

void printDigit(int number){
    if (number == 0) {
        return;
    } 

    //for forward print
    printDigit(number/10);//dont write return here it will not exe next line
    int mod=number%10;
    cout<<mod<<endl;
    //return  printDigit(number/10); //can write here as next line has nothing to exec 

    //for reverse print
    // int mod=number%10;
    // cout<<mod<<endl;
    // printDigit(number/10);
    
}

int main() {

    int number=647;
    printDigit(number);

	return 0;
}