// class Solution {
// public:
//     int findPairs(vector<int>& nums, int k) {
//         sort(nums.begin(),nums.end());
//         int i=0;
//         int j=1;
//         // int ans=0;
//         //test case [1,1,1,1,1] so use set for no duplicate (distinct type data can store)
//         set<pair <int,int> > ans;
//         while(j<nums.size()){
//             int diff=nums[j]-nums[i];
//             if(diff==k){
//                 // cout<<nums[i]<<" "<<nums[j]<<endl;
//                 ans.insert({nums[i],nums[j]});
//                 // ans++;
//                 i++;
//                 j++;
//             }
//             else if(diff<k){
//                 j++;
//             }
//             else 
//             {
//                 i++;
//             }
//             if(i==j){
//                 j++;
//             }
//         }
//     //test case [1,1,1,1,1] so use set for no duplicate (distinct type data can store)
//         return ans.size();
        
//     }
// };

//using binary search -> TLE PROBLEM
class Solution {
public:
    bool binarySearch(vector<int>& nums,int start, int key){
        int end=nums.size()-1;
        int mid=start+(end-start)/2;
        while(start<=end){
            if(nums[mid]==key){
                //key found
                return true;
            }
            else if(key>nums[mid]){
                start=mid+1;
            }
            else
            end=mid-1;
        }
        return false;

    }

    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
         set<pair <int,int> > ans;
         //nums[i]+k) -> this is the game e.g-> k=2 j=3,i=1 then then this also same
         //i+1 -> go right side
         for(int i=0;i<nums.size();i++){
            if(binarySearch(nums,i+1,nums[i]+k)){//if true then push
            ans.insert({nums[i],nums[i]+k});//will not insert->1,3 or 3,1
            }  
        }
        return ans.size();
    }
};


















