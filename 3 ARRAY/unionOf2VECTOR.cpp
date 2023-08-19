#include <iostream>
#include<stdio.h>
#include<vector>
using namespace std;
//dont do hard code, take user input
//USING VECTOR, DYNAMIC ARRAY
//for duplicate kam avi baki hai
int findUnique(vector<int>arr){

}
int main(){
    //no duplicates case1
    // int n;
    // cout<<"How many elem are there?or size of array?";
    // cin>>n;
    // vector<int>arr(n);
    int arr[]={1,2,3,4,5};
    int sizeA=5;
    int brr[]={6,7,8,9,10,11};
    int sizeB=6;
    vector<int>ans;
    //push all elem of arr to vector
    for(int i=0;i<sizeA;i++){
        ans.push_back(arr[i]);
    }
    //push all elem of brr to vector
    for(int i=0;i<sizeB;i++){
        ans.push_back(brr[i]);
    }
    //printing the value
    for (int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}
