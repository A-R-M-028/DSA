//You are climbing a staircase. It takes n steps to reach the top.
//Each time you can either climb 1 or 2 steps. 
//In how many distinct ways can you climb to the top?
class Solution {
public:
    int climbStairs(int n) {
        //opnimization needed after completion of DP
        
        // if(n==0||n==1) return 1;
                if(n==1) return 1;
                if(n==2) return 2;
        return climbStairs(n-1)+climbStairs(n-2);//this return is for return final ans;
    }
};