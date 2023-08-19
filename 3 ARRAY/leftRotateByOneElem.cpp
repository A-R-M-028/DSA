#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
void leftRotate(vector<int>arr){
    int n=arr.size();
    int base;
    for (int i = 0; i < n; i++){
        if(i==0){
            base=arr[0];
        }
        else if(i!=0){
            arr[i-1]=arr[i];
        }
        cout<<i<<endl;
        arr[i]=base;
    }
    //to pring
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}  
    
}
int main()
{
 vector<int>arr{1,2,3,4,5,6,7,9};
 leftRotate(arr);
 return 0;
}