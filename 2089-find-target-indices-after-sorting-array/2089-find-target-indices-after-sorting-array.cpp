class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<int> arr;
        for(int i =0;i<=n-1;i++){
            if(nums[i] == target){
                arr.push_back(i);
            }
        }
        return arr;
    }
};