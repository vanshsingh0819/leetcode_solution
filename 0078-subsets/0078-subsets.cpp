class Solution {
public:
void fn(int idx,vector<int>& nums,vector<vector<int>> &ans,vector<int>& ds){
        int n = nums.size();        
        ans.push_back(ds);        
        for(int i =idx;i<=n-1;i++){            
            ds.push_back(nums[i]);
            fn(i+1, nums,ans,ds);
            ds.pop_back();
        }

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        //sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> ds;
        fn(0, nums,ans,ds);
        return ans;
    }
};