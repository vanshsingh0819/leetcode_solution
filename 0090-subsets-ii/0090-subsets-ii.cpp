class Solution {
public:
void fn(int idx,vector<int>& nums,vector<int>& ds,vector<vector<int>> &ans ){
    int n = nums.size();
   
        ans.push_back(ds);
    
    for(int i =idx;i<=n-1;i++){
        if(i > idx && nums[i] == nums[i-1]){
            continue;
        }
        ds.push_back(nums[i]);
        fn(i+1,nums,ds,ans);
        ds.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
         fn(0,nums,ds,ans);
         return ans;
        
    }
};