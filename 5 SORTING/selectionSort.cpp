#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
//finding minimum element
int main()
{
 vector<int>arr{5,4,3,2,1};

 //select ans positioned
 for (int i=0;i<arr.size()-1;i++){
    int minIndex=i;
    for (int j=i+1;j<arr.size();j++){
        if(arr[j]<arr[i]){// or you can say minIndex also
        minIndex=j;
        }
    }
    swap(arr[i],arr[minIndex]);
     }  
    //now time for print
    for (int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

 return 0;
}

