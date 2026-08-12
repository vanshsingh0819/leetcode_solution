class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        int maxLen = INT_MIN;
        unordered_map<int,int> mpp;
        for(int r =0;r<=n-1;r++){ 
            mpp[nums[r]]++;                      
            while(mpp[nums[r]] > k){
                mpp[nums[l]]--;
                l++;
            }
            int len = r-l+1;
            maxLen = max(maxLen,len);
        }
        return maxLen;
    }
};