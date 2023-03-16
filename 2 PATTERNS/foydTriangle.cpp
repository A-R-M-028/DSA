#include <iostream>
#include<stdio.h>
using namespace std;
//Nothin in this problem only a fancy name is here
int main(){
int n;
cout<<"Put the row number:"<<"\n";
cin>>n;
int flag=1;
    for (int i=0;i<n;i++){
        for (int j=0;j<i+1;j++){
            cout<<flag++;
    }
        cout<<endl; 
}
        return 0;
}