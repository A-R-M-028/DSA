#include <iostream>
#include<stdio.h>
#include<vector>
using namespace std;
//dont do hard code, take user input
//USING VECTOR, DYNAMIC ARRAY
//Here see how pair and code is working
int main(){
    int key=50;
    vector<int>arr{10,20,30,40,50};
    for (int i=0;i<arr.size();i++){
        cout<<"We are at element: "<<arr[i]<<endl;
        int element=arr[i];
        for(int j=i+1;j<arr.size();j++){
            if(key==(element+arr[j]))
            cout<<"Pair Found: "<<"("<<element<<","<<arr[j]<<")"<<endl;
            // cout<<"("<<element<<","<<arr[j]<<")"<<endl;

        }
    }

    return 0;
}