#include <iostream>
using namespace std;
#include<limits.h>
//same strategy for min also
void findMax(int arr[],int size,int i,int& maxi){
    //base case
    if(i>=size) return; //>=  needed as when i==n then only return if size 5********
    //process
    if(arr[i]>maxi){
        maxi=arr[i];
    }
    //recurrence relation
    findMax(arr,size,i+1,maxi);

 }

int main() {

    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    int i=0;
    int maxi=INT_MIN;
    findMax(arr,size,i,maxi);
    cout<<maxi;
	return 0;
}