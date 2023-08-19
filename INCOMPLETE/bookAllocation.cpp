#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
bool isValid(vector<int>arr,int size,int k,int max){
    int student=1;
    int sum=0;
    for (int  i = 0; i < size; i++){
    sum=sum+arr[i];
    if(arr[i]>max) return false;//if element is more than max or ans
    if(sum>max){
        student++;
        sum+=arr[i];
    }
    if(student>k) return false;
}
return true;
}
int main()
{   //if n<k return -1;
    //array sorted or not it doesnot matter
    vector<int>arr{10,20,30,40};//you will serach not in array, int search space 
    int student=2;
    int size=arr.size();
    int start=0;
    int end=accumulate(arr.begin(),arr.end(),0);//sum id 0 firsrt 
    int result=-1;
    while(start<=end){
        int mid=start+(end-start)/2;//start+(end-start)>>2;
        if(isValid(arr,size,student,mid)==true){
            int result=mid;
            end=mid-1;
        }
        else 
        start=mid+1;
    }
 return 0;
}