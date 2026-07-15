class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mpp;
        for(int r = 0;r<=n-1;r++){
            if(mpp.find(nums[r]) != mpp.end()){
                if(abs(r - mpp[nums[r]]) <= k){
                    return true;
                }
            }
            mpp[nums[r]] = r;
        }
        return false;
    }
};