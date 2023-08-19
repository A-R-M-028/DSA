#include <iostream>
#include<stdio.h>
#include<vector>
using namespace std;

    bool findKey(int arr[][3],int row,int col,int key){
        for (int i=0;i<row;i++){
            for (int j=0;j<col;j++){
                if(arr[i][j]==key){
                    return true;
                }

            }
          
        }
        return false;

    }

int main(){
    //declaration

    // int arr[3][3];

    //initialized
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3;
    int col=3;
    int key=100;
    if(findKey(arr,row,col,key)==true){
        cout<<"Found";
    }
    else cout<<"Not found";

}


