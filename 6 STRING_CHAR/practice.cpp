#include<iostream>
#include<string.h>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

//to take input at space use--->>> cin.getline(sentence,100);

int getlength(char arr[]){
    int length=0;
    int i=0;
    while (arr[i]!='\0')
    {
      length++;
      i++;
    }
    return length;
    
}
int main()
{

    char ch[100];
    cin>>ch;
    // cin.getline(ch,50);
    // for (int i=0;i<8;i++){
    //     cout<<ch[i]<<" ";
    // }
    // cout<<int(ch[7]);
    cout<<"Len is "<<getlength(ch);
    cout<<"Len is "<<strlen(ch);
    cout<<"Len is "<<strcmp(ch);

 
 return 0;
}