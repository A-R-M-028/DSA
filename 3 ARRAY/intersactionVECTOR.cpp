#include <iostream>
#include<stdio.h>
#include<vector>
using namespace std;
//dont do hard code, take user input
//USING VECTOR, DYNAMIC ARRAY
int findUnique(vector<int>arr){

}
int main(){
    //no duplicates case1
    // int n;
    // cout<<"How many elem are there?or size of array?";
    // cin>>n;
    // vector<int>arr(n);
    // int arr[]={1,2,3,4,5};
    // int sizeA=5;
    // int brr[]={3,4,5,5,8,2};
    // int sizeB=6;
    vector<int>arr{1,2,3,4,5};
    vector<int>brr{3,4,5,10,8,2};
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<brr.size();j++){
            if(arr[i]==brr[j]){
                brr[i]=-1;//for not count again marked or int_min
                ans.push_back(arr[i]);

            }

        }
        
    }
    //printing
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
    for(auto valuesInsideAns:ans){
        cout<<valuesInsideAns<<" ";
    }


    return 0;
}
