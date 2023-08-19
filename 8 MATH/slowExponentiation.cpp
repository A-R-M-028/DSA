//T.C -> O((N))
#include<iostream>
using namespace std;

int main(){
    int a=2;
    int b=3;//N
    int ans=1;
    for (int  i = 0; i < b; i++)
    {
        ans=ans*a;
    }
    
    cout<<ans;
    return 0;
}