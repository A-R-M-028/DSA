#include <iostream>
#include<stdio.h>
using namespace std;

int main(){
int n;
cout<<"Put the row number:"<<"\n";
cin>>n;//if row 3 then col is 6
    for (int i=0;i<n;i++){
        for (int j=0;j<i+1;j++){
            cout<<"*";
    }
        cout<<endl; 
}
        return 0;
}


