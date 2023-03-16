//infinite search(approx similar)
//doubling search
//galloping search
//staragic search  
#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
//there is an error (silly mistake , not giving output)
//brute force by one loop is also possible 
int binarySearch(int arr[],int start,int end,int key){
    int s=start;
    int e=end;
    int x=key;
    while(s<=e){
        int m=(s+e)/2;
        if(arr[m]==x) return m;
        else if(arr[m]<x)//go right
        {
            s=m+1;
        }
        else e=m-1;
    }
    return -1;
}

int expSearch(int arr[],int n,int x){
    //for infinite search no need of n

    if(arr[0]==x){
        return 0;
    }
    int i=1;
    while(i<n && arr[i]<=x){
        i=i*2;//i*=2;i=i<<1;
    }   
    //when con false, out of loop
return binarySearch(arr,i/2,min(i,(n-1)),x);
//why (n-1)-> let key is last index then see
}

int main()
{
 int arr[]={3,4,5,6,11,23,14,15,56,70};
 int size=sizeof(arr)/sizeof(int);
 int key=23;
 int ans=expSearch(arr,size,key);
 return 0;
}
//t.c=log(2^logm-1)
//brute force
//m1
// while(1){
//     if.....arr[i]>x break;
//     else arr[i]==x 
//     ans=i;i++

// }
//m2 better aproach
// i=0;
// j=1;
// if(a[j]<x){
//     i=j;
//     j=j*2;//step can *3 or *4 also
// }
// now sub array found and form binary search