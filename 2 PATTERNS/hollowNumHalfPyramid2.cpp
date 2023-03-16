#include <iostream>
#include<stdio.h>
using namespace std;

                           /*MOST IMPORTANT EXAMPLE*/

int main(){
int n;
cout<<"Put the row number:"<<"\n";
cin>>n;

for (int row=0;row<n;row++){
    for (int col=0;col<n-row;col++){
        if(row==0){
            cout<<col+1;
        }
        else if (col==0){
            cout<<row+1;
        }
        else if(row!=0&&col!=0&&col!=n-row-1){
            cout<<" ";
        }
        else
        cout<<5;
}
cout<<endl;
}
return 0;
}