#include <iostream>
#include<stdio.h>
using namespace std;

int count(int arr[],int size){
    int zero=0;
    int one=0;
    for(int i=0;i<size;i++){

    if(arr[i]==0)
    zero++;
    if(arr[i]==1)
    one++;
    }
    cout<<"One: "<<zero<<" ";
    cout<<endl;
    cout<<"Zero: "<<one<<" ";


}
int main(){
int arr[]={0,1,1,0,1,0,1,0,1,0,1,1,1,1,0};
int size=sizeof(arr)/sizeof(int);
int n;
count(arr,size);
return 0;

}
