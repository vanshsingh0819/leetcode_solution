class Solution {
public:
    void fn(int idx,int k, int n,vector<vector<int>>& ans,vector<int> ds){   // n == target
        if(n == 0 && ds.size() == k){
            ans.push_back(ds);
            return;
        }
      //  if(n < 0 || ds.size() > k){
      //      return;
       // }
        for(int i = idx; i <= 9; i++){
       //     if(i > n) break;
            ds.push_back(i);
            fn(i+1,k,n-i,ans,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> ds;
        fn(1,k,n,ans,ds);
        return ans;
    }
};