#include <iostream>
#include<stdio.h>
using namespace std;

int main(){
int n;
cout<<"Put the row number:"<<"\n";
cin>>n;

for (int row=0;row<n;row++){
for (int col=0;col<n-row-1;col++){
    cout<<" ";
}
//formula is 2*0+1,2*1+1,2*2+1 rowwise
for(int col=0;col<row+1;col++){    

cout<<" *";
}
cout<<endl;
}
}