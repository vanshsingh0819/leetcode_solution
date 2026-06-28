class Solution {
public:
    void fn(int idx,vector<int>& candidates, int target, vector<vector<int>>& ans,vector<int>& ds){
        int n =candidates.size();
            if(target == 0){
                ans.push_back(ds);
                return;
            }
            
        for(int i = idx;i<n;i++){
            if(i>idx && candidates[i] == candidates[i-1]) continue;
            if (candidates[i] > target)
                break;
                ds.push_back(candidates[i]);
                fn(i + 1, candidates, target - candidates[i], ans, ds);
                ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        fn(0,candidates,target,ans,ds);
        return ans;
    }
};