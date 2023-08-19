#include <iostream>
#include<string.h>
#include <bits/stdc++.h>
using namespace std;

    int reverse(int x){
		//#leetcode 1
		int isNeg=false;
		//for -ve first + it then return with +ve
		if(x<0){
			isNeg=true;
			x=-x;//x become +ve
		}
		if(x<=INT_MIN){
			//<= inclusive as 21....48 if positive then cant place in + int place
			return 0;
		}
		int rev=0;
		while(x!=0){
			if(rev>INT_MAX/10){
				return 0;
				//little bit confusin in this scope
			}
		int rem=x%10;
		rev=rev*10+rem;
		x=x/10;
		}

		return isNeg?-rev:rev;

	}
    int main(){


        return 0;
    }