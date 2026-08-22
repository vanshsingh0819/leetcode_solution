class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        for(int i =0;i<=n-1;i++){
            int element = target - nums[i];
            if(mpp.find(element) != mpp.end()){
                return {i,mpp[element]};
            }
            mpp[nums[i]] = i;
        }
        return{};
    }
};