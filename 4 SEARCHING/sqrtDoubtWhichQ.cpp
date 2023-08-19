#include <iostream>
#include<stdio.h>
#include<vector>
#include <algorithm>
using namespace std;
int sqroot(int target){
    int start=0;
    int end=target;
    int result=-1;
   
    while(start<=end){
    int mid=start+(end-start)/2;
    if(target==mid*mid){
        return mid;
    }
    else if(mid*mid>target){
        //go to left
        end=mid-1;
    }
    else
    //go to left
    int result=mid;
    start=mid+1;
    }
    return result;
}

int main(){
    int target=15;
    int ans=sqroot(target);
    cout<<ans;

    return 0;
}
