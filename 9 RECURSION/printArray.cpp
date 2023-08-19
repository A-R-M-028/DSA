#include <iostream>
using namespace std;

 void printArr(int arr[],int size,int i){
    //base case
    if(i>=size) return; //>=  needed as when i==n then only return if size 5********
    //process
    cout<<arr[i]<<" ";
    //recurrence relation
    printArr(arr,size,i+1);

 }

int main() {

    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    int i=0;
    printArr(arr,size,i);
    // cout<<size;
	return 0;
}