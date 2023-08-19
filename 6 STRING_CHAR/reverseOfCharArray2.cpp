#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
//for char length by '\0'
// int getLength(char name[]) {
//         int length = 0;
//         int i = 0; 

//         while(name[i] != '\0') {
//                 length++;
//                 i++;
//         }
//         return length;
// }
//in string in char or original '\0 not accesible'
void reverse(char str[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
}
int main()
{
 char str[100]={'a','b','c'};
 int size=strlen(str);
reverse(str,size);
for (char i = 0; i < size; i++)
{
    cout<<str[i]<<" ";
}

 return 0;
}