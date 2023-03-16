#include <iostream>
#include<stdio.h>
#include<vector>
using namespace std;
    //row wise sum
    // void sumOfRow(int arr[][3],int row,int col){
    //     for (int i=0;i<row;i++){
    //         int sum=0;
    //         for (int j=0;j<col;j++){
    //             sum=sum+arr[i][j];
    //         }
    //         cout<<"Sum is: "<<sum<<endl;
    //     }

    // }

    //i,j->col  , j,i->row wise

        void sumOfRow(int arr[][3],int row,int col){
        for (int i=0;i<row;i++){
            int sum=0;
            for (int j=0;j<col;j++){
                sum=sum+arr[i][j];
            }
            cout<<"Sum is: "<<sum<<endl;
        }

    }


int main(){
    //declaration

    // int arr[3][3];

    //initialized
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3;
    int col=3;
    sumOfRow(arr,row,col);
    // for (int i=0;i<3;i++){
    //     for (int j=0;j<3;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;

    // }
}


