#include <iostream>
#include<stdio.h>
using namespace std;

int main(){
int n;
cout<<"Put the row number:"<<"\n";
cin>>n;//n=5


for (int i=0;i<n;i++){
    //left top star
    for(int j=0;j<n-i;j++){
        cout<<"*";
    }
    //middle top space
    for(int j=0;j<2*i;j++){
        cout<<" ";
    }
    //right top star
    for (int j=0;j<n-i;j++){
        cout<<"*";
    }
cout<<endl;
}
for (int i=0;i<n;i++){
    //left down star
    for(int j=0;j<i+1;j++){
        cout<<"*";
    }
    //middle down space
    for(int j=0;j<n*2-i*2-2;j++){
        cout<<" ";
    }
    //right down star
    for (int j=0;j<i+1;j++){
        cout<<"*";
    }
cout<<endl;
}
return 0;
}
