class Solution {
public:
//by 2 pointer approach, by binary search is due*
    vector<int> twoPointerApp(vector<int>& arr, int k, int x){
        int l=0;
        int h=arr.size()-1;
        while(h-l>=k){
            if(x-arr[l]>arr[h]-x)//compress the distance until x is fulfilled
            {
                l++;
            }
            else{
                h--;
            }
        }
        vector<int>ans;
        for (int i=l;i<=h;i++){
            ans.push_back(arr[i]);
            }

        return ans;
    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        //sorted array
        return twoPointerApp(arr,k,x);
      
    }
};
//by 2 pointer approach, by binary search is due*