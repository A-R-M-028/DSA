#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;
//MOST IMPORTANT PATTERN******************
//NOT UNDERSTOOD PROPERLY
int solve(vector<int>& arr, int target) {
//base case
if(target==0) return 0;
if(target<0) return INT_MAX;
//recurrence relation
int mini=INT_MAX;
for (int i = 0; i < arr.size(); i++)
{
    int ans=solve(arr,target-arr[i]);
    if(ans!=INT_MAX){
        mini=min(ans+1,mini);
    }
}
return mini;

}
int main() {
  vector<int> arr{1,2,3};
  int target = 5; 
  //function call
  int ans = solve(arr, target);
  cout << "Answer is: " << ans << endl;
  return 0;
}