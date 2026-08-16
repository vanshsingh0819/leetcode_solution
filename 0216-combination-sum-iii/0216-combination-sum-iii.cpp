class Solution {
public:
    void fn(int idx,int k, int n,vector<int> &ds,vector<vector<int>>&ans){
        if(n == 0 && ds.size() == k){
            ans.push_back(ds);
            return;
        }
       if(n < 0) return;
        for(int i=idx;i<=9;i++){
            ds.push_back(i);
            // n-=i;
            fn(i+1,k,n-i,ds,ans);
            // n+=i;
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>  ds;
        vector<vector<int>> ans;
        fn(1,k,n ,ds,ans);
        return ans;
    }
};