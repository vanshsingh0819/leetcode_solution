class Solution {
public:
    void fn(int i, vector<int>& candidates, int target, vector<vector<int>>& ans, vector<int>& ds) {        
        if(i == candidates.size()){
            if(target == 0){
                    ans.push_back(ds);
            }
            return;
        }
            if(candidates[i] <= target){
                ds.push_back(candidates[i]);
                fn(i, candidates, target - candidates[i],ans,ds);
                ds.pop_back();
            }
            
                fn(i+1, candidates, target,ans,ds);
        }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        fn(0,candidates,target,ans,ds);
        return ans;
    }
};