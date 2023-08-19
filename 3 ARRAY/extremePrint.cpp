#include <iostream>
#include<stdio.h>
#include<limits.h>
using namespace std;

//By 2 pointer approach

int extremePrint(int arr[],int size){
    int start=0;//0
    int end=size-1;//5
    while(true){
        if(start>end)
        break;
        if(start==end)
        cout<<arr[start];
        else{
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";
        }
            start++;
            end--;
    }

    }

int main(){
int arr[]={1,2,3,4,5,6,7,8,9};
int size=sizeof(arr)/sizeof(int);
extremePrint(arr,size);

return 0;
}
