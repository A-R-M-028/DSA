#include <iostream>
#include<stdio.h>
#include<vector>
#include <algorithm>
using namespace std;

// int peakMountainArray(vector<int>arr){
//     int start=0;
//     int end=arr.size()-1;
//     int mid;
//     while(start<=end){
//         mid=start-(start+end)/2;
//         if(arr[mid]>arr[mid+1]&&arr[mid-1]){
//             cout<<mid;
//             return arr[mid];
//         }
//         else if(arr[mid]<arr[mid+1]){
//             start=mid+1;
//         }
//         else end=mid-1;
//     }

// }

int findPeakIndex(vector<int>arr){
    int start=0;
    int end=arr.size()-1;
    // int mid=start-(start+end)/2;
    while(start<end){
        // int mid=(start+end)/2;
        int mid=start+(end-start)/2;
        if(arr[mid]<arr[mid+1])
        {
            //go to right side from left
            start=mid+1;

        }
        else 
            end=mid;//thats mean
    }
    return end;//or mid
}
//COND LINE A: (arr[mid]<arr[mid+1])
//COND : (arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]) (can give invalid index or base)
//then return mid


int main(){
      vector<int>v{0,10,5,2};
      int ans=findPeakIndex(v);
        cout<<ans;
        return 0;

}