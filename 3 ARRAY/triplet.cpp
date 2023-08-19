#include <iostream>
#include<stdio.h>
#include<vector>
using namespace std;
//Simple funda jkata term sekota loop required

int main(){
    int key=80;
    vector<int>arr{10,20,30,40,50};
    for(int i=0;i<arr.size();i++){
        cout<<"You are at i: "<<arr[i]<<endl;
        for(int j=i+1;j<arr.size();j++){
            cout<<"You are at j: "<<arr[j]<<endl;
            for(int k=j+1;k<arr.size();k++){
                cout<<"You are at k: "<<arr[k]<<endl;
                if(arr[i]+arr[j]+arr[k]==key)
                cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
            }
        }
    }
    //done

    return 0;
}