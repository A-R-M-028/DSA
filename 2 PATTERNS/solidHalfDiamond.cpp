#include <iostream>
#include<stdio.h>
using namespace std;

int main(){
int n;
cout<<"Put the row number:"<<"\n";
cin>>n;//n=5;
// for (int i=0;i<n;i++){
//     for (int j=0;j<i+1;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// for (int i=0;i<n-1;i++){
//     for (int j=0;j<n-i-1;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
for (int i=0;i<2*n-1;i++){
    int con=0;
    if(i<n){
        //growing phase of diamond
        con=i;
    }
    else
    {
        //shrinking phase of diamond
         con=n-(i%n)-2;
    }
    for (int j=0;j<=con;j++){
        cout<<"*";
    }
    cout<<endl;
}
return 0;
}

