#include <iostream>
#include<stdio.h>
#include<vector>
#include <algorithm>
using namespace std;

int main(){

    // int arr[]={1,2,5,7,9,20,30,90,100,1000};
    // int size=10;
    // int key=1000;
    // int start=0;
    // int end=size-1;
    // while(start<=end){
    //     // int mid=(start+end)/2;
    //     // int mid=(start/2)+(end/2); 
    //     int mid=start+(end-start)/2;
    //     if(arr[mid]==key){
    //         cout<<mid;
    //         break;
    //     }
    //     else if(key<arr[mid]){
    //         //search left side
    //         end=mid-1;
    //     }
    //     else
    //     //search right side
    //     start=mid+1;

    // }
    //using stl you know this but not depend it
    //some online interview you have to implement by it yourself
    //using vector
    // vector<int>v{1,2,3,5,6,7,8,11,11,12};
    // if( (binary_search (v.begin(), v.end(), 100))){
    //     cout<<"Found";
    // }
    // else{
    //     cout<<"Not found";
    // }

    //using array
    int arr[]={1,2,3,5,6,7,8,11,11,12};
    int size=10;
    if( (binary_search (arr,arr+size, 1))){
        cout<<"Found";
    }
    else{
        cout<<"Not found";
    }
    
    return 0;

}