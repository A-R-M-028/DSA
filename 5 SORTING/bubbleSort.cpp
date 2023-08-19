#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
//finding max elem
//SINKING SORT
int main(){

  vector<int>arr{10,1,7,6 ,14,9};
  int n=arr.size();
  for (int i=0;i<n-1;i++){
    bool flag=false;
    for (int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            flag=true;
            swap(arr[j],arr[j+1]);
        }
    }
    if(flag==false){//no swap done so break (sorted)
        break;
    }
  }
  //time to print
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  
 return 0;
}