// #include <iostream>
// #include<stdio.h>
// #include<vector>
// using namespace std;


// int main(){
//     vector<int>arr{0,1,1,1,0,0,0,1,0,1};
//     int start=0;//for swap
//     int end=arr.size()-1;//for swap
//     int i=0;//i will use for traversing
//     //i always with start, it follows i
//     //dry run it
//     while(i!=end){
//         if(arr[i]==0){
//             swap(arr[start],arr[i]);
//             start++;
//             i++;
//         }
//         if(arr[i]==1){
//             swap(arr[i],arr[end]);
//             end--;
//         }
//     }
//     for(auto var:arr){
//         cout<<var<<" ";
//     }

//     return 0;
// }

//we can use only start and end without traverse with i*******

#include <iostream>
#include<stdio.h>
#include<vector>
using namespace std;


int main(){
    vector<int>arr{0,1,1,1,0,0,0,1,0,1,0,1,0,1,0,1,};
    int start=0;//for swap
    int end=arr.size()-1;//for swap
    //int i=0;//i will use for traversing
    //i always with start, it follows i
    //dry run it
    while(start!=end){
        if(arr[start]==0){
            // swap(arr[start],arr[start]);
            start++;
        }
        else {
            swap(arr[start],arr[end]);
            end--;
        }
    } 
    for(auto var:arr){
        cout<<var<<" ";
    }

    return 0;
}
