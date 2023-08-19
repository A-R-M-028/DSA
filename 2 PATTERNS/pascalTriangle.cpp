#include <iostream>
#include<stdio.h>
using namespace std;
//not done yet, mostly done dry run needed
int main(){
int n;
int coef;int k;
cout<<"Put the row number:"<<"\n";
cin>>n;
//if row 3 then col is 6
//     for (int i=0;i<n;i++){
//         for (int j=0;j<i+1;j++){
//             {if(j==0||i==0)
//             coef=1;
//             else 
//             coef=coef*(i+j-1)/j; 
//             k=j;  }  
//             cout<<coef*(i+k-1)/k;  
//             cout<<"*"; 
//     }
//         cout<<endl; 
// }
//         return 0;
// }
for (int i=1;i<=n;i++){
    int c=1;//start from 1
    for (int j=1;j<=i;j++){
        cout<<c<<" ";
        c=c*(i-j)/j;//by formula
    }
    cout<<endl;
}
    return 0;
}