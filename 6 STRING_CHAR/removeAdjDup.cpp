#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
 string str="abbaca";
 string ans="";
 int i=0;
 while(str.length()>i){
    if(ans.length()>0 && str[i]==ans[ans.length()-1]){
        ans.pop_back();
    }
    else
    ans.push_back(str[i]);
     i++;
 }
 for (int i = 0; i < ans.length(); i++)
 {
    cout<<ans[i]<<" ";
 }
 


 return 0;
}