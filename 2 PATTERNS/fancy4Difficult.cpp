#include <iostream>
#include<stdio.h>
using namespace std;
//UFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF Done
int main(){
int n;
int flag;
cout<<"Put the row number:"<<"\n";
cin>>n;//n=4;
//top cection
for (int i=0;i<n;i++){
    flag=1;
    for (int j=0;j<i+1;j++){
        if(j==0){
            cout<<"*";}
        else
        cout<<flag++;}
        flag=flag-2;
        for (int j=0;j<i;j++){
        if(j==i-1){
            cout<<"*";
        }
        else
        cout<<flag--;
        }
    cout<<endl;
}
//n=4
//bottom sec
for (int i=0;i<n-1;i++){
    flag=1;
    for (int j=0;j<n-1-i;j++){
        if(j==0){
            cout<<"*";}
        else
        cout<<flag++;}
        flag=flag-2;
        for (int j=0;j<n-2-i;j++){
        if(j==n-i-3)
        {
        cout<<"*";
        }
        else
        cout<<flag--;
        }
        cout<<endl;

}
    return 0;
}
