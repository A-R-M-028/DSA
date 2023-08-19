#include <iostream>
#include<stdio.h>
#include<limits.h>
#include<vector>
using namespace std;

    int Max(int arr[][3],int row,int col){
        int maxi=INT_MIN;
        for (int i=0;i<row;i++){
            for (int j=0;j<col;j++){
                if(arr[i][j]>maxi)
                maxi=arr[i][j];
            }
        }
        return maxi;

    }
        int Min(int arr[][3],int row,int col){
        int mini=INT_MAX;
        for (int i=0;i<row;i++){
            for (int j=0;j<col;j++){
                if(arr[i][j]<mini)
                mini=arr[i][j];
            }
        }
        return mini;
    }

int main(){
    //declaration
    // int arr[3][3];
    //initialized
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3;
    int col=3;
    int ansMin=Min(arr,row,col);
    cout<<ansMin<<endl;
    int ansMax=Max(arr,row,col);
    cout<<ansMax;

return 0;
}


