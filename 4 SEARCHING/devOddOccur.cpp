
#include <iostream>
#include<stdio.h>
#include<vector>
#include <algorithm>
using namespace std;


int oddOcured(vector<int>arr){
    int start=0;
    int end=arr.size()-1;
   
    while(start<=end){
         int mid=start+(end-start)/2;
         if(start==end){
            return arr[mid];
         }
         if(mid&1==0){//for even index
            if(arr[mid+1]==arr[mid]){
                //go to right side
                start=mid+2;
            }
            else
            end=mid;//may be ans here always in iven index
         }
         if(mid&1==1){//odd index
            if(arr[mid-1]==arr[mid]){
                //go to rogt side
                start=mid+1;
            }
            else //ans not here also
            end=mid-1;

         }

    }
    return -1;

}

int main() {
vector<int>arr{1,1,2,2,3,3,4,4,3,600,4,4};
int ans=oddOcured(arr);
cout<<"Odd occured: "<<ans;
return 0;
}
