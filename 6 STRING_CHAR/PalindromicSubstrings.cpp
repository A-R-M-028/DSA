//REJECTION TO SELECTION*************************
//MOST IMPORTANT*********************************
//***********************************************

#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
//by 2 for loop it is also possible i-0,j=i
int expandAroundIndex(string str,int i,int j){
    int count=0;
    while(i>=0 && j<str.length() && str[i]==str[j]){
        count++;
        i--;
        j++ ;
    }
    return count;
}
int main()
{
 string str="noon";
 int size=str.length();
 //for iterate every index
 int count = 0;
 for (int i=0;i<size;i++){
    //The game is odd and even (odd-same index, even-j=i+1)
    //for odd substring
    int ansOdd= expandAroundIndex(str,i,i);
    count=count+ansOdd;
    //for even substring
    int ansEven= expandAroundIndex(str,i,i+1);
    count=count+ansEven;
 }
 cout<<count;
 return 0;
}