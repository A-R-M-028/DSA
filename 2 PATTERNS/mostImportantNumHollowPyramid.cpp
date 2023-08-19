#include <iostream>
#include<stdio.h>
using namespace std;

                                        /*MOST IMPORTANT EXAMPLE*/

int main(){
int n;
cout<<"Put the row number:"<<"\n";
cin>>n;

for (int row=0;row<n;row++){
for (int col=0;col<n-row-1;col++){
    cout<<" ";
}
//formula is 2*0+1,2*1+1,2*2+1 rowwise
int start=1;
for(int col=0;col<2*row+1;col++){   
    //1st and last row 
if(row==0||row==n-1){
    //even
    if(col%2==0){
    cout<<start++;
    }
//odd
    else cout<<" ";
    }
//rest of the part
else  
{
    if(col==0){
        cout<<1;
    }
    else if(col==2*row+1-1){
        cout<<row+1;
    }
    else cout<<" ";
} 
}
cout<<endl;
}
}