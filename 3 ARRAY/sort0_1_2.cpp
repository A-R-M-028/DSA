#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<int>arr{0,1,2,0,1};
    // sort(arr.begin(),arr.end());
    // int i=0;int j=0;//for swap
    // int k=arr.size()-1;//for swap
//using counter method M1
        // for (int i=0;i<nums.size();i++){
        //     if(nums[i]==0){
        //         zero++;
        //     }
        //     else if(nums[i]==1){
        //     one++;
        //     }
        //     else if(nums[i]==2){
        //     two++;
        //     }

        // }
        // //time for spread the num usig while, not recommended as it is not inplace soln
        // int i=0;
        // while(zero--){
        //     nums[i]=0;
        //     i++;
        // }
        // while(one--){
        //     nums[i]=1;
        //     i++;
        // }
        // while(two--){
        //     nums[i]=2;
        //     i++;
        
        // }

    //using 3 pointer approach (efficient aproach) M2
    int i=0;int j=0;int k=arr.size()-1;
    while(j<=k){
        if(arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
        else if(arr[j]==1){
            j++;
        }
        else {
                    //arr j==2
        swap(arr[j],arr[k]);
            k--;

        }

    }

    for(auto var:arr){
        cout<<var<<" ";
    }

    return 0;
}
