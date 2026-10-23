class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;
        for(int i =0;i<=n-1;i++){
            if(nums[i] ==  i) continue;
            ans &= nums[i];
        }
        if(ans == -1)return 0;
        return ans;
        
    }
};