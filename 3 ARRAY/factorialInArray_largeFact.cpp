#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
 int fact=7;
 int carry=0;
 vector<int>arr;
 arr.push_back(1);
 for (int i = 2; i <= fact; i++){
    for (int j = 0; j < arr.size(); i++)
    {
        int x=arr[j]*i+carry;
        arr[j]=x%10;
        carry=x/10;
 }
 while (carry)
 {
    arr.push_back(carry%10);
    carry=carry/10;
 }
 
 }
 //understood as first j is insert last carry is insert, hence it shuld revest it
 reverse(arr.begin(),arr.end());
 int i=0;
 for (auto var:arr)
 {
    cout<<arr[i]<<" ";
 }
 
 return 0;
}