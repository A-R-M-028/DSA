#include <iostream>
#include<stdio.h>
#include<limits.h>
using namespace std;
//remaining is reverse using auxilary array
//By 2 pointer approach

int reverseUsingSwap(int arr[],int size){
    // int i=arr[0];//dont do this mistake again
    // int j=arr[size-1];//dont do this mistake again
    int i=0;
    int j=size-1;
    while(i<j){
        // swap(arr[i++],arr[j--]);
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]==temp;
        i++,j--;
    }
}
int reverseUsingAux(int arr[],int brr[],int n){
    for(int i=0,j=n-1;j>=0;i++,j--){
        // ------------------------
    }
}

int print(int arr[],int n){
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
int main(){
int arr[]={1,2,3,4,5,6,7,8,9};
int brr[]={0};
int size=sizeof(arr)/sizeof(int);
reverseUsingSwap(arr,size);
// reverseUsingAux(arr,brr,size);
print(arr,size);
return 0;
}
