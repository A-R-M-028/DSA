#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
int arr[]={1,2,3};
int brr[]={4,5,6};
 int carry=0;
 int digit;
 int x;
 //take arrary, im using string (piyaji)
string ans;
 int i;int j;
 while (i>=0&&j>=0){
    x=arr[i]+brr[j]+carry;
    digit=x%10;
    ans.push_back(digit+'0');
    carry=x/10;
    i--;
    j--;

 }
 //for arr is 4 elem, brr is 3 elem
 while (i>=0){
    x=arr[i]+0+carry;
    digit=x%10;
    ans.push_back(digit+'0');
    carry=x/10;
    i--;
 }
  //for arr is 3 elem, brr is 4 elem
  while (j>=0){
    x=0+brr[j]+carry;
    digit=x%10;
    ans.push_back(digit+'0');
    carry=x/10;
    j--;
 }
 //if at the masb there is one carry for next addition
 if (carry){
    ans.push_back(carry+'0');
 }
 //before reversing eliminate all the zero, it will there as it is not int, it is string
 int K=ans.size()-1;
 while (ans[K]=='0'){
    ans.pop_back();
    K--;
 }
//now reverse the string
//call stl lib
reverse(ans.begin(),ans.end());
//  return ans;
 //now time to final print
 for (int i = 0; i < ans.size(); i++)
 {
    cout<<ans[i]<<" ";
 }
 return 0;
}