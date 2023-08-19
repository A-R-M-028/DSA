#include <iostream>
#include<stdio.h>
#include<vector>
using namespace std;
//always go firsrt for index finding of that element

int missingElemSwap(int arr[],int size){\

    //can be done by sort and index by R.C will o nlogn

    //easy from main if one is missing and here pushing only 9 value then in 10 natural sum is needed
    //Approach : 1. find m=size+1;
            //   2.total = m*(m+1)/2
            // int sum;
            // for (int i=0;i<size;i++){
            //     sum+=arr[i];
            // }

            // return total-sum;


//}
//using visited
// int missingElemVisited(int arr[],int size){
//     for (int i=0;i<size;i++){//no zero value and arr[0] we cant assign vacant
//         //the place will not change at alll
//         int index=abs(arr[i]);
//         if(arr[index-1]>0){
//             arr[index-1]*=-1;
//         }

//     }
//     for (int i=0;i<size;i++){
//         // cout<<arr[i]<<" "; 
//         //every -ve will visited except i+1
//         if (arr[i]>0){
//             cout<<i+1<<endl;
//         }
//            }

// }
//using swap
// int missingElemSwap(int arr[],int size){
//     int i=0;
//     while(i<size){
//         int index=arr[i]-1;
//         if(arr[i]!=arr[index]){
//             swap(arr[i],arr[index]);
//             // cout<<arr[i];

//         }
//         else
//         i++;

//     }
//     for (int i=0;i<size;i++){
//         if(i+1!=arr[i])
//         cout<<i+1;
//     }


}


int main(){

    int arr[]={1,3,5,3,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    // missingElemVisited(arr,size);//m1
    missingElemSwap(arr,size);//m2
    // missingElemHash(arr,size);//m3
    // cout<<size;

    return 0;
}
