#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>arr{10,1,7,6,14,9};
    //sorting,lib algorithm
    sort(arr.begin(),arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
 
 return 0;
}