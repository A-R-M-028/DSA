#include <iostream>
#include<stdio.h>
#include<vector>
#include <algorithm>
using namespace std;

int firstOccurence(vector<int>v,int target){
    int start=0;
    int end=v.size()-1;
    int ans=-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(target==v[mid]){
            ans=mid;
            //go to left side for further chaeck lower index of target
            end=mid-1;

        }
        else if(target>v[mid]){
        //go to right side
        start=mid+1;

        }
        else
        //target is smaller than mid
        //so follow process 1
        end=mid-1;

    }
    return ans;

}
int lastOccurence(vector<int>v,int target){
    int start=0;
    int end=v.size()-1;
    int ans=-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(target==v[mid]){
            ans=mid;
            //go to left side for further chaeck lower index of target
            start=mid+1;

        }
        else if(target>v[mid]){
        //go to right side
        start=mid+1;

        }
        else
        //target is smaller than mid
        //so follow process 1
        end=mid-1;

    }
    return ans;

}


int main(){
    vector<int>v{3,4,4,4,4,4,6,7,8,9};
    int target=4;//or check for any
    int indexOfFirst=firstOccurence(v,target);
    int indexOfLast=lastOccurence(v,target);
    // cout<<indexOfFirst<<" "<<indexOfLast;
    cout<<indexOfLast-indexOfFirst+1;



    return 0;    
    }
// #include <iostream>
// #include<stdio.h>
// #include<vector>
// #include <algorithm>
// using namespace std;

// int main(){

//     vector<int>v{3,4,4,4,4,4,6,7,8,9};
//     int target=4;
//     //using stl lower bound
//     auto lower=lower_bound(v.begin(), v.end(), 4);//not returning address it ruturning how many int num in this range
//     auto upper=upper_bound (v.begin(), v.end(), 4);//do
//     int first=lower-v.begin();//starting-that index = doubt
//     int last=upper-v.begin();// starting-that index = doubt
//     // cout<<first<<" "<<last<<endl;
//     // cout<<(last-first+1);


//     return 0;
// }
