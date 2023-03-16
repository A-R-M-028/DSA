//T.C O(n(log.log(n)))
//array is seive
class Solution {
public:
    int countPrimes(int n) {
        if(n==0) return 0;
        vector<bool>prime(n,true);//all are prime marked
        prime[0]=prime[1]=false;
        int ans=0;
        for(int i=2;i<n;i++){
                    if(prime[i]){
            ans++;
            int j=2*i;
            while(j<n){
                prime[j]=false;
                j+=i;
            }
        }

        }
        
        return ans;

        }
        
    };