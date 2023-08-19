#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;

bool palindromeOrNot(char ch[]){
//swaping mathod, can be done using aux array
 int n=strlen(ch);
int i=0;
int j=n-1;
while(i<=j){
    if(ch[i]!=ch[j]){
        return false;
    }
    else
    i++;
    j--;
}
return true;

}
int main()
{
 char ch[100]="madam";
//cin.getline(ch,100);
bool ans=palindromeOrNot(ch);
cout<<ans;
 //for print the final array
//  for (int i = 0; i < n; i++)
//  {
//     cout<<ch[i]<<" ";
//  }
 


 return 0;
}