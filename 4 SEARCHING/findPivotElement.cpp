#include <iostream>
#include<stdio.h>
#include<vector>
#include <algorithm>
using namespace std;
//same code for rotated
int findPivot(vector<int>arr){
    int start=0;
    int end=arr.size()-1;

    // while(start<=end){
    //     int mid=start+(end-start)/2;
    //     //for handle 7 and 1 which is not monatonic
    //     //first two if is here for only ans or return value
    //     if((mid+1)<size && arr[mid]>arr[mid+1]){
    //         return mid;
    //     }
    //     if((mid-1)>=0 && arr[mid-1]>arr[mid]){
    //         return mid-1;
    //     }
    //     //here if and else use only for partitioning or can say divide the left and right
    //     if (arr[mid]>=arr[start]){
    //         //go to right side
    //         start=mid+1;
    //     }
    //     //go to left side
    //     //(arr[mid]<=arr[start])
    //     else
    //     end=mid-1;
        
    // }
    // return -1;

    while(start<=end){
        int mid=start+(end-start)/2;

        if(start==end){
            //only one element
            return arr[mid];
        }
        if(mid+1<=end && arr[mid]>arr[mid+1]){
            return arr[mid];

        }
        if( mid-1>=start  && arr[mid-1]>arr[mid]){
            return arr[mid-1];

        }
        if(arr[start]<arr[mid]){
            start=mid+1;
        }//this is by commom sense
        else 
        end=mid-1;
    }
    return -1;

}

int main(){

    vector<int>arr{3,4,5,6,7,8,9,11,1,2};
    int ans=findPivot(arr);
    cout<<"Pivot is: "<<ans;

    return 0;

}