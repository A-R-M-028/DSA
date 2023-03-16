#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;
int toUperCase(char ch[]){
   int i=0;
   while(ch[i]!='\0'){
      if(ch[i]>='a'&&ch[i]<='z'){
         ch[i]=ch[i]-'a'+'A';
      }
      i++;
   }

}
void toLowerCase(char ch[]){

}
int main()
{
 char ch[100];
 cin.getline(ch,100);
 int n=strlen(ch);

 toUperCase(ch);
//  toLowerCase(ch);
 //for print the final array
 for (int i = 0; i < n; i++)
 {
    cout<<ch[i]<<" ";
 }

 return 0;
}