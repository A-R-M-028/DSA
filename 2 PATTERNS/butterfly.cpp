#include <iostream>
#include<stdio.h>
using namespace std;

// I THINK LITTLE BIT CONFUSION IS HERE

int main(){
int n;
cout<<"Put the row number:"<<"\n";
cin>>n;//n=5(by)5;
 for (int i=0;i<2*n;i++){
    int partition=(i<n)?i:n+(n-i-1);
    int space=(i<n)?2*(n-partition-1):i-partition-1;
    for (int j=0;j<2*n;j++){
        if(j<=partition){
            cout<<"*";
        }
        //this is very important, this is catch
        else if(space>0){
            cout<<" ";
            space--;
        }
        else cout<<"*";
    }
    cout<<endl;
 }
    return 0;
}