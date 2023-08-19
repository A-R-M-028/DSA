#include <iostream>
#include<stdio.h>
#include<vector>
#include <algorithm>
using namespace std;
//There is an errr,not done yet

//#3 methods are there
//M1-> by 2 for loop and count         
//M2-> (sorting required) by 2 pointer appproch           
//M3-> by binary search 
//set will not store duplicate(store distinct value)
int BS(vector<int>arr,int start,int x){
}
int BSMethod(vector<int>arr,int x,int k){
    //here chota  se bada (expanding)
    //NOT UNDERSTOOD*
    }

int kDifferent(vector<int>arr,int k){
    //by 2 pointer approach (always chek the diff, or distance bt them)
    sort(arr.begin(),arr.end());
    //by 2 pointer approach
    int i=0;
    int j=1;
    int count=0;
    while(j<arr.size()){//or !i<j # i shoudld be equal to j
        int diff=(arr[j]-arr[i]);
        if(diff==k){
            count++;
            ++i;
            ++j;
            cout<<arr[i]<<" "<<arr[j]<<endl;
        }
        else if(diff>k){
            i++;
        }
        else //arr[j]-arr[i]<k 
        j++;
    }
    return count;

}

int main(){

    vector<int>arr{1,1,3,4,5};
    int k=2;
    //The pair is 3,1 and 3,5 count will be 2
    int ans=kDifferent(arr,k);
    // cout<<ans;
    return 0;

}