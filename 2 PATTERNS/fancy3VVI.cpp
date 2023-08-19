#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
int n;
int flag;
cout<<"Put the row number:"<<"\n";
cin>>n;
//n=4;
//     flag = 1;//3
//     //growing face
// for (int i=0;i<n;i++){
//     for (int j=0;j<i+1;j++){
//         cout<<flag<<"*";
//     }
//     flag++;
//     cout<<endl;
// }
//     flag = flag-1;//3
//     //shrinking face
// for (int i=0;i<n;i++){
//     for (int j=0;j<n-i;j++){
//         cout<<flag<<"*";
//     }
//         flag--;
//     cout<<endl;
// }
// return 0;
// }
//growing
//PRINTING OF STAR IS SO EASY ONLY NEED AFTER FIRST AND BEFORE LAST
    int c1=1;
for (int i=0;i<n;i++){
    for (int j=0;j<=i;j++){
    cout<<c1++;
    if(j<i){//this is the catch not count as dedicated j
            cout<<"*";//not count as it is the after 1st stment, so on
            // cout<<"#";
    }
    }
    cout<<endl;
}
// shrinking
int c2=c1-n;//11-4=7 7 8 9 10 now value is 11 -> 11-(4-1-1)=11-2=9
for (int i=0;i<n;i++){
    int k=c2;
    for (int j=0;j<=n-i-1;j++){
    cout<<k++;
    if(j<n-i-1){//this
        cout<<"*";
    }
    }
    c2=c2-(n-i-1);
    cout<<endl;
}
return 0;
}



