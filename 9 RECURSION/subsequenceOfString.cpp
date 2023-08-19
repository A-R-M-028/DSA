#include <iostream>
#include<vector>
using namespace std;
#include<limits.h>
//output is for printing
//vector is for storing all the value
  void printSubsequences(string str,int n,string output,int i, vector<string>& v){
    if(i==n){
        v.push_back(output);
        return ;
    }
    //include
    printSubsequences(str,n,output+str[i],i+1,v);
    //exclude
    printSubsequences(str,n,output,i+1,v);

  }


int main() {
    string str="abc";
    vector<string> v;
    string output = "";
    int i = 0;
  int n = str.length();
  printSubsequences(str,n, output, i, v);

  cout << "Printing all subsequences " << endl;
  for(auto val: v) {
    cout << val << " " ; 
  }
	return 0;
}