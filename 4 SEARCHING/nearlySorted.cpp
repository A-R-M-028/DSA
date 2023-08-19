#include <iostream>
#include<stdio.h>
#include<vector>
#include <algorithm>
using namespace std;
//lawra
int nearlySorted(vector<int>arr,int target){
    int start=0;
    int end=arr.size()-1;
    while(start<=end){
            int mid=start+(end-start)/2;
        if(arr[mid]==target){
        return arr[mid];
        }

        else if(mid+1<=end&&arr[mid+1]==target){
        return arr[mid+1];
        }

        else if(mid-1>=start&&arr[mid-1]==target){
        return arr[mid-1];
        }

        else if(arr[mid]>target){
        end=mid-2;        //go left
        }
        else 
        start=mid+2;    //go right
    }
}

int main(){

    vector<int>arr{10,3,40,20,50,80,70,90};
    int target=90;
    int ans=nearlySorted(arr,target);
    cout<<ans;
    return 0;

}