#include <iostream>
using namespace std;
#include<limits.h>

void findKey(int arr[],int size,int i,int& key){
    //base case
    if(i>=size) return; //>=  needed as when i==n then only return if size 5********
    //process
    if(arr[i]==key){
       key=i;
    }
    //recurrence relation
    findKey(arr,size,i+1,key);
 }
 
int main() {

    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    int i=0;
    int key=1;
    findKey(arr,size,i,key);
    cout<<key;
	return 0;
}