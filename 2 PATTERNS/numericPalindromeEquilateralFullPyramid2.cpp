#include <iostream>
#include<stdio.h>
using namespace std;

int main(){
// int n;
// cout<<"Put the row number:"<<"\n";
// cin>>n;
// int flag;
// for (int row=0;row<n;row++){
// for (int col=0;col<n-row-1;col++){
//     cout<<" ";
// }
// flag=1;
// for(int col=0;col<row+1;col++){    
// cout<<flag++;
// }
// int count=row;
// for(int col=0;col<row;col++){
//     cout<<count--;
// }
// cout<<endl;
// }   
    int n=5;
    int k=n;
for (int i=0;i<n;i++){
    int c=1;
    for (int j=0;j<k;j++){
    if(j<n-i-1){
        cout<<" ";
    }
    else if(j<=n-1){
        cout<<c++;
    }
    else if(j==n){
        c=c-2;
        cout<<c--;
    }
    else{
        cout<<c--;
    }
}
// when k is 5 then k++, next time when loop iterate then it will k=6
//when k is 6 then k++, next time when loop is iterate then it will 7
//UNDERSTOOD?????????????????????? =>>>>> YES!(MEHNAT LAGA RE)
    k++;
    cout<<endl;
}
return 0;
}