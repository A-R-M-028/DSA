#include <iostream>
using namespace std;
#include<limits.h>

bool checkSort(int arr[],int n,int i){
    //base case
    if(i==n-1) return true;
    //process
    if(arr[i+1]<arr[i]) return false;
    //recurrence relation
    return checkSort(arr,n,i+1);
 }

int main() {

    int arr[]={1,2,3,4,0};
    int size=sizeof(arr)/sizeof(int);
    int i=0;
    bool ans=checkSort(arr,size,i);
    if(ans){
        cout<<"Sorted";
    }
    else{
    cout<<"Unsorted";
    }
	return 0;
}