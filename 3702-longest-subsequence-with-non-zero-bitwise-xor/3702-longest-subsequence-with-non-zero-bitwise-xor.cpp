class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        bool zero = true;
        for(int i = 0;i<=n-1;i++){
            ans ^= nums[i];
            if(nums[i] != 0){
                zero = false;
            }
        }
        if(zero == true) return 0;
        if(ans == 0) return n-1;
        
        return n;
    }
};