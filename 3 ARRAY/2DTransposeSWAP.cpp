#include <iostream>
#include<stdio.h>
#include<vector>
using namespace std;
//row-->cols
//col-->rows
//one type of swaping
//here problem is that lower and upper of diagonal part swaping 2 times so swaping done 2 times
//solution is you have to run the loop only upper triangular part or lower triangular part i think using continue
//or you can take a different array and put the values of main array to that aux row --> col 

#include <vector>

using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    
    // Transpose the matrix, ANOTHER APPR
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    

    void transpose(int arr[][3],int row,int col,int brr[][3]){
        for (int i=0;i<row;i++){
            for (int j=0;j<col;j++){
                //# arr[i][j]=arr[j][i];
                brr[i][j]=arr[j][i];
            }
          
        }

    }
    void print(int brr[][3],int row,int col){
        for (int i=0;i<row;i++){
            for (int j=0;j<col;j++){
                cout<<brr[i][j]<<" ";

            }
            cout<<endl;
          
        }

    }


int main(){
    //declaration
    // int arr[3][3];
    //initialized
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int brr[3][3];
    int row=3;
    int col=3;
    transpose(arr,row,col,brr);
    print(brr,row,col);

return 0;
}


