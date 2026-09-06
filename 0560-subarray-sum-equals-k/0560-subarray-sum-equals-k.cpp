class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int preSum = 0;
        unordered_map<int,int> mpp;
        mpp[0] = 1;
        int cnt = 0 ;
        for(int r = 0;r<=n-1;r++){
            preSum += nums[r];
            cnt += mpp[preSum - k];
            mpp[preSum]++ ;
        }
        return cnt;
    }
};