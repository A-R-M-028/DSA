#include <iostream>
#include<stdio.h>
#include<vector>
#include <algorithm>
using namespace std;

int lastOccurence(vector<int>v,int target){
    int start=0;
    int end=v.size()-1;
    int ans=-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(target==v[mid]){
            ans=mid;
            //go to left side for further chaeck lower index of target
            start=mid+1;

        }
        else if(target>v[mid]){
        //go to right side
        start=mid+1;

        }
        else
        //target is smaller than mid
        //so follow process 1
        end=mid-1;

    }
    cout<<ans;

}

int main(){
    vector<int>v{3,4,4,4,4,4,6,7,8,9};
    int target=4;//or check for any
    int indexOf=lastOccurence(v,target);

    return 0;    }