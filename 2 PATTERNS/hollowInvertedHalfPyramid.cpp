#include <iostream>
#include<stdio.h>
using namespace std;

int main(){
int n;
cout<<"Put the row number:"<<"\n";
cin>>n;//n=5(by)5;
    for (int i=0;i<n;i++){
        for (int j=0;j<n-i;j++){
            if(i==0||i==n-1||j==0||(i!=0&&i!=n-1&&j==n-i-1)){
                cout<<"*";
            }
    else cout<<" ";
        }
            cout<<endl;
    }
    return 0;
}

