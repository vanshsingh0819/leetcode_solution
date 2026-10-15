class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        unordered_map<int,int>mpp;
        for(int i = 0;i<=n-1;i++){
            mpp.clear();
            for(int j = i;j<=n-1;j++){
                mpp[nums[j]]++;
                ans += mpp.size() * mpp.size();
            }
        }
        return ans;
    }
};