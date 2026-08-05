class Solution {
public:
    void fn(int i,vector<int>& nums,vector<int>& ds,vector<vector<int>> &ans){
        int n = nums.size();
        if(i == n){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[i]);
        fn(i+1,nums,ds,ans);
        ds.pop_back();
        fn(i+1,nums,ds,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> ans;
        fn(0,nums,ds,ans);
        return ans;
    }
};