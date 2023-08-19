#include <iostream>
#include<stdio.h>
using namespace std;

int linearSearch(int arr[],int size,int key){
    int index;
    for (int i=0;i<size;i++){

        if(arr[i]==key){
            return true;
        }

    }
    return false;

}
int main(){
int arr[5]={1,2,3,4,5};
int size=sizeof(arr)/sizeof(int);
int n;
cout<<"Enter the key you want to find: ";
cin>>n;
int ans=linearSearch(arr,size,n);
if(ans==true){
    cout<<"Found";
}
else cout<<"NOt found";

return 0;

}
