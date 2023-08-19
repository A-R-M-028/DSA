#include <iostream>
#include<stdio.h>
using namespace std;
//not done yet
int main(){
int n;
cout<<"Put the row number:"<<"\n";
cin>>n;//n=5(by)5;
    for (int i=0;i<n;i++){
        //first spaces
        for (int j=0;j<n-i-1;j++){
            cout<<" ";        
            }
        for (int j=0;j<2*i+1;j++){
            if(i==0 || j==0 || i==n-1 || (i!=0&&i!=n-1&&j==i*2)){
                cout<<"*";
            }
            else cout<<" ";
    }
    cout<<endl;

}
    return 0;
}

