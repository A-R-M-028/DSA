#include <iostream>
#include<stdio.h>
#include<limits.h>
using namespace std;

int linearSearchMax(int arr[],int size){
        int maxi=INT_MIN;
    for (int i=0;i<size;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }

    }
    return maxi;
}
int main(){
int arr[]={1,2,3,4,5,10};
int size=sizeof(arr)/sizeof(int);
cout<<endl;
cout<<linearSearchMax(arr,size);

return 0;

}
