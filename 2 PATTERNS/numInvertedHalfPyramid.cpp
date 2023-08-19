#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
int n;
cout<<"Put the row number:"<<"\n";
cin>>n;//n=5(by)5;
    for (int i=0;i<n;i++){
        //first spaces
        for (int j=0;j<n-i;j++){
            cout<<j+1;        
            }
            cout<<endl;
    }
    return 0;
}