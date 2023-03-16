#include <iostream>
#include<stdio.h>
using namespace std;

int main(){
int n;
int flag;
cout<<"Put the row number:"<<"\n";
cin>>n;//n=7;
//     flag = n-1;//3
// for (int i=0;i<n;i++){

//     for (int j=0;j<i+1;j++){
//         cout<<flag;
//     }
//     flag++;
//     cout<<endl;
// }
//     flag = flag-2;//3
// for (int i=0;i<n-1;i++){
//     for (int j=0;j<n-i-1;j++){
//         cout<<flag;
//     }
//         flag--;
//     cout<<endl;
// }
int flagg;
for (int i=0;i<n;i++){
    int cond=(i<=n/2)?2*i:2*(n-i-1);
    for (int j=0;j<=cond;j++){
        if(j<=cond/2){
            cout<<j+1;
            flagg=j;
        }
        else cout<<cond-j+1;
    }
    cout<<endl;
}
return 0;
}

