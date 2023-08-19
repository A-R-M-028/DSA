#include <iostream>
#include<stdio.h>
#include<vector>
#include <algorithm>
using namespace std;

//M1 normally sorting and nearest all elements, 2 for
//M2 is efficienet (2 pointer) 1 loop
//M3 binary search
int BS(vector<int>arr,int start,int x){
}
int BSMethod(vector<int>arr,int x,int k){
    //here chota  se bada (expanding)
    //NOT UNDERSTOOD*
    }

int kClosest(vector<int>arr,int x,int k){
    //here bada se chota (expanding)
    sort(arr.begin(),arr.end());
    vector<int>v;
    int l=0;
    int h=arr.size()-1;
    while (h-l>k){
        if(x-arr[l]>arr[h]-x){
            l++;
        }
        else
        h--;
    }
    // for (int i = l; i <= h; i++)
    // {
    //     v.push_back(arr[i]);
    // }
    //OR using stl
    return vector<int>(arr.begin()+l,arr.begin()+h+1);
    // return v;
}
//t.c O(n-k)
int main(){

    vector<int>arr{1,1,3,4,5};
    int k=2;//2 element near key
    int x=5;//5 is the key
    kClosest(arr,x,k);
    // cout<<ans;
    return 0;

}