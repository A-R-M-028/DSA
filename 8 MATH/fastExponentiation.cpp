//T.C->O(LOG(N))
#include<iostream>
using namespace std;

int main(){
    int a=2;
    long long b=4;//N
    int ans=1;
    while(b>0){
        //odd
        if(b&1){
            ans=ans*a;
        }
        //even
        a=a*a;
        b>>=1;
    }
    
    cout<<ans;
    return 0;
}

//for large ans 
	public:
	//%m means that ans will be within ranges
		long long int PowMod(long long int x,long long int n,long long int M)
		{
		   long long ans=1;
		   while(n>0){
		       if(n&1){
		           ans=(ans*x)%M;
		       }
		       x=(x*x)%M;
		       n>>=1;
		   }
		   return ans%M;
		}