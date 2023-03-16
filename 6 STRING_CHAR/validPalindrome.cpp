#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;

bool checkPalindrome(string str,int i,int j){
    while(i<=j){
        if(str[i]!=str[j]){
            return false;
        }
        else //nothing to do
        //as it is same go ahead
        i++;
        j--;
    }
    return true;
}
int main()
{
 
 string str="leverl";
 //the problem is i have to remove e or r but which one
 //hence i will write a function a check by || if(true||false) then it is true
 int i=0;
 int j=str.length()-1;
 while(i<=j){
    if(str[i]!=str[j]){
        //check for palindrome
        //***THIS IS THE GAME***
        bool ans=checkPalindrome(str,(i+1),j)||checkPalindrome(str,i,(j-1));
        //from q stmt you can delete at most 1 elem
        cout<<ans;
    }
    else //dont perform anything
    i++;
    j--;
 }


 return 0;
}