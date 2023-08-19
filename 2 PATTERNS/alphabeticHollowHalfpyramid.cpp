#include <iostream>
#include<stdio.h>
using namespace std;

int main(){
int n;
cout<<"Put the row number:"<<"\n";
cin>>n;//n=5;
char flag;
for (int i=0;i<n;i++){
    flag='A';
    for (int j=0;j<i+1;j++){
        cout<<flag++;
    }
    char count=flag-2;
    for (int j=0;j<i;j++){
        cout<<count--;
    }
    cout<<endl;
}
return 0;
}

