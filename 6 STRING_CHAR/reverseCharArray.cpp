#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;

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
void  rev(char arr[]){
    int n=getlength(arr);
    int i;int j;
    for (i=0,j=n-1;i<=n/2;i++,j--                                               ){
        swap(arr[i],arr[j]);

    }
    //can be done one while loop also
    // while(i<=j){
    //     swap(...)
    // i++,j--;
    // }

}
int main()
{
 char arr[100];
 cin>>arr;
 rev(arr);
 for (int i = 0; i < getlength(arr); i++)
 {
    cout<<arr[i]<<" ";
 }
 
 return 0;
}