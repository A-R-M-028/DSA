#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
 char ch[100];
 cin.getline(ch,100);
 int n=strlen(ch);
 //for replace space
 int i=0;
while(ch[i]!='\0'){
    if(ch[i]==' '){
        ch[i]='#';
    }
    i++;
}
 //for print the final array
 for (int i = 0; i < n; i++)
 {
    cout<<ch[i]<<" ";
 }
 
 return 0;
}