#include <iostream>
#include<stdio.h>
using namespace std;

int main(){
int n;
cout<<"Put the row number:"<<"\n";
cin>>n;
int flag=0;
for (int row=0;row<n;row++){
   // int flag=row;
for (int col=0;col<n-row-1;col++){
    cout<<" ";
}
for(int col=0;col<row+1;col++){    
cout<<row+col+1;
flag=row+col+1-1;
}
for(int col=0;col<row;col++){
    cout<<flag--;
}
cout<<endl;
}
}