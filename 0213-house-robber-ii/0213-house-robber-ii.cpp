class Solution {
public:
    int fn(int i,int end, vector<int>& nums,vector<int>&dp){
        if(i < end) return 0;
        if(dp[i] != -1) return dp[i];
        int pick = nums[i]+ fn(i-2,end,nums,dp);
        int notpick = fn(i-1,end,nums,dp);
        return dp[i] = max(pick,notpick);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1,-1);
        if( n == 1) return nums[0];
        int case1 = fn(n-2,0,nums,dp);
        fill(dp.begin(), dp.end(), -1);
        int case2 = fn(n-1,1,nums,dp);
        return max(case1,case2);
    }
};