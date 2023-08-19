#include <iostream>
#include<stdio.h>
#include<vector>
#include <algorithm>
using namespace std;

int binaryOn2d(int arr[][4],int rows,int cols,int target ){
    int start=0;
    int end=rows*cols-1;
    //mid is written inside while as need to update, here rowIndex & colIndex is needed
   
    while(start<=end){
        int mid=start*(end-start)/2;
        int rowIndex=mid/cols;
        int colIndex=mid%cols;
        if(arr[rowIndex][colIndex]==target){
            return 1;
        }
        else if(arr[rowIndex][colIndex]<target){
            //go right
            start=mid+1;
        }
        else//go left
        end=mid-1;   
    }
    return 0;
}
int main(){

    int arr[3][4]={ {1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12}
                    };
    int rows =3;
    int cols=4;
    int target=5;
    bool ans=binaryOn2d(arr,rows,cols,target);
    if(ans){
        cout<<"Found";
    }
    else cout<<"Not found";
    return 0;

}