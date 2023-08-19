    public:
    //actual game(partition and check for min)
    bool isValid(int a[],int n,int k,int mid){
        int painter=1;
        int sum=0;
        for (int i=0;i<n;i++){
            if(a[i]>mid) return false;
            sum=sum+a[i];
            if(sum>mid){
                painter++;
                sum=a[i];
            }
            if(painter>k){
                return false;
            }
        }
        return true;
    }
    //template of B.S
    int findPages(int a[], int n, int k) 
    {
      if (k>n) return -1;
      int start=0;
      int end=accumulate(a, a+n,0);
      int ans=-1;
      while(start<=end){
          int mid=start+(end-start)/2;//(start+end)>>1
          if(isValid(a,n,k,mid)==true){
            ans=mid;
            end=mid-1;  
          }
          else 
          start=mid+1;
      }
      return ans;
    }