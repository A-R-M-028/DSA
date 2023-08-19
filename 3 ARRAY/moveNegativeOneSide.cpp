#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

void moveNegative(vector<int>arr){
//using sorting stl
// sort(arr.begin(),arr.end());
//dutch national algorithm
int i=0;int j=arr.size()-1;
while(i<j){
    if(arr[i]<0){
        i++;
    }
    else if(arr[j]>=0){
        j--;
    }
    else {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

for (int i = 0; i < arr.size(); i++)
{
    cout<<arr[i]<<" ";
}
   
}
int main()
{
 vector<int>arr{3,4,5,-5,7,0,-10,8};
    moveNegative(arr);

 return 0;
}