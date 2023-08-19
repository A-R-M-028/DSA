//wave also
#include <iostream>
#include<stdio.h>
#include<vector>
using namespace std;
void wavePrintMatrix(vector<vector<int>>arr){
  int row=arr.size();//you know this
  int col=arr[0].size();//1st col or every col of 2d
  // cout<<row<<" ";
  // cout<<col<<endl;
  for (int i=0;i<col;i++){
    //for even col -> top to bottom
    if((i&1)==0){
    for (int j=0;j<row;j++){
        cout<<arr[j][i]<<" ";  
      }
      }
    else
    //for odd col -> bottom to top
      {
      for (int j=row-1;j>=0;j--){
      cout<<arr[j][i]<<" ";
    }
        
    }
  }
  
  }
  
int main(){
  vector<vector<int>>arr{
  {1,2,3,4},
  {5,6,7,8},
  {9,10,11,12},
  };
  wavePrintMatrix(arr);

    return 0;
}
