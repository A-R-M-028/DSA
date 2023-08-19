#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
bool isSafe(int i, int j, int row, int col,int arr[][3],vector<vector<bool> >&visited){
    //if all are true then only iterate
    if( ((i>=0 && i<row) && (j>=0 && j<col)) &&
    (arr[i][j]==1) &&
    (visited[i][j]==false)){
        return true;
    }
    else return false;
}
void solveMaze(int arr[3][3], int row, int col, int i, int j,vector<vector<bool> >& visited, vector<string>& path, string output){
    //base case
    if(i==row-1 && j==col-1){
        //ans found
        path.push_back(output);
        return;
    }
    //Down-> (i+1, j)
    if(isSafe(i+1,j,row,col,arr,visited)){
        visited[i+1][j]=true;
        solveMaze(arr,row,col,i+1,j,visited,path,output+'D');
        //backtrack, for all possible ans(all path), without this you will only solve 1 soln
        visited[i+1][j]=false;
    }
    //Left-> (i,j-1)
        if(isSafe(i,j-1,row,col,arr,visited)){
        visited[i][j-1]=true;
        solveMaze(arr,row,col,i,j-1,visited,path,output+'L');
         //backtrack
        visited[i][j-1]=false;
    }
    //Right-> (i,j+1)
        if(isSafe(i,j+1,row,col,arr,visited)){
        visited[i][j+1]=true;
        solveMaze(arr,row,col,i,j+1,visited,path,output+'R');
         //backtrack
        visited[i][j+1]=false;
    }
    //Up->  (i-1,j)
        if(isSafe(i-1,j,row,col,arr,visited)){
        visited[i-1][j]=true;
        solveMaze(arr,row,col,i-1,j,visited,path,output+'U');
         //backtrack
        visited[i-1][j]=false;
    }
}
int main(){
    int arr[3][3]=
                {{1,0,0},
                {1,1,0},
                {1,1,1}};
    int row=3;
    int col=3;
    //2d array for visit or not
    vector<vector<bool> >visited(row,vector<bool>(col,false));
    //first box is true let assume
    visited[0][0]=true;
    //store DLRU -> when visited the base case
    vector<string>path;
    //char of DLRU on every iterate or call
    string output="";
    solveMaze(arr, row, col, 0, 0, visited, path, output);

    for (auto i:path){
        cout<<i<<" ";
    }

    return 0;
}