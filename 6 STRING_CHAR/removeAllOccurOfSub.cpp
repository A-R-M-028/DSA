#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
 string s = "daabcbaabcbc";
 string part = "abc";
int position=s.find(part);
while(position!=string::npos){
    s.erase(position,part.length());
    position=s.find(part);

}
for (int i = 0; i < s.length(); i++)
{
    cout<<s[i]<<" ";
}
 return 0;
}