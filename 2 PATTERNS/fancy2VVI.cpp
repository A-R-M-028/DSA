#include <iostream>
#include<stdio.h>
#include"assert.h"
using namespace std;
//not done yet
int main(){
int n;
int flag;
cout<<"Put the row number:"<<"\n";
cin>>n;
assert(n<=9);
//not a generic pattern it is a specific pattern
//n=4;
//     flag = 1;//3
// for (int i=0;i<n;i++){
//     for (int j=0;j<i+1;j++){
//         cout<<flag<<"*";
//     }
//     flag++;
//     cout<<endl;
// }
//     flag = flag-1;//3
// for (int i=0;i<n;i++){
//     for (int j=0;j<n-i;j++){
//         cout<<flag<<"*";
//     }
//         flag--;
//     cout<<endl;
// }
// return 0;
// }
int col=17;
for (int i=0;i<n;i++){
    int num_start=8-i;
    int num_print=i+1;
    int count_num=num_print;
    for(int j=0;j<col;j++){
        //yes after dry run concept clr if cond
        if(j==num_start&&count_num>0){
        cout<<num_print;
        num_start+=2;
        count_num--;
        }
       else cout<<"*";
        }
cout<<endl;
}
return 0;
}


