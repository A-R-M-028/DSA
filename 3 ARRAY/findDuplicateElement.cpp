#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>arr){
//#M1 sort
        // sort(nums.begin(),nums.end());//all sorted
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i]==nums[i+1])
        //     return nums[i];   

//#M2 count (bruteforce)
        // for (int i=0;i<nums.size();i++){
        //     int count=1;
        //     // if(nums[i]!=-1){
        //         for (int j=i+1;j<nums.size();j++){
        //         if(nums[i]==nums[j])
        //         count++;
        //         // nums[j]=-1;
        //         //}

        //     }
        //     if(count>1)
        //     return nums[i];
        //     }
        //     return -1;
//#M3 (hashing)/element as index visited
  //m3 using hashing or visited marked
    //     int ans =-1;
    //     for (int i=0;i<nums.size();i++){
    //         int index=abs(nums[i]);
    //         //already visited
    //         if(nums[index]<0){
    //             return index;
    //         }
    //         //mark visited
    //         else 
    //         nums[index]*=-1;
    //     }
        // return ans;
    //M4 swaping/(hashing)
        //this is the best method using swap of 0th element with its index
    while(arr[0]!=arr[arr[0]]){
        swap(arr[0],arr[arr[0]]);
    }
        return arr[0];
        // cout<<arr[0];

}
int main()
{
 vector<int>arr{3,1,3,4,2};
cout<<findDuplicate(arr);

 
 return 0;
}