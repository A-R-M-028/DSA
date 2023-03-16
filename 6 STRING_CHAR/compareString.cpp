#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;

int compare(string a,string b){
    if(a.length()!=b.length()){
        return false;
    }
    for (int i=0;i<a.length();i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
        return true;

    }
int main()
{
    string a = "Love";
    string b = "Love";

    bool ans=compare(a,b);
    cout<<ans;
 
 return 0;
}