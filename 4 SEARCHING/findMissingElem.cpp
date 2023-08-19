//1 using index
//2 using value
//**************using binary search*********************
#include <iostream>
#include<stdio.h>
#include<vector>
#include <algorithm>
using namespace std;

// int missingUsingValue(vector<int>v){
//     int s=0;
//     int e=v.size()-1;
//     int mid=(s+e)/2;
//     while(s<=e){
//     }

// }
int missingUsingIndex(vector<int>v){
    int s=0;
    int e=v.size()-1;
    int ans=-1;
    //le beta to por hoche
//     while(s<=e){
//         int m=(s+e)/2;
//         if(v[m]!=m+1){
//             //return ans
//             ans=m+1;
//         }
//         else if(v[m]==m+1)
//         //go to right side
//         s=m+1;

//         else
//         //go to left v[m]!=mid+1
//         e=m-1;
//     }
//         cout<<ans;   

// }
int m;
while(s<=e){
    m=s+(e-s)/2;
    if(v[m]==m+1){
        s=m+1;
    }
    else
    e=m-1;
}
return v[m]-1;
}


int main(){
    vector<int>v{2,3,4,5,5};
    // missingUsingValue(v);
    int ans=missingUsingIndex(v);                    
    cout<<ans;

    return 0;    
    }
