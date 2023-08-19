#include <iostream>
#include<stdio.h>
#include<limits.h>
using namespace std;

int linearSearchMin(int arr[],int size){
        int min=INT_MAX;
    for (int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }

    }
    return min;
}
int main(){
int arr[]={1,2,3,4,5,10};
int size=sizeof(arr)/sizeof(int);
cout<<endl;
cout<<linearSearchMin(arr,size);

return 0;

}
