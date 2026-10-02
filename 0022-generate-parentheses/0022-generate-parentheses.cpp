class Solution {
public:
    void solve(int i, int open,int close,int n, string &ds,vector<string> &ans){
        if(i == 2*n){
            ans.push_back(ds);
            return;
        }
        if(open < n){
            ds.push_back('(');
            solve(i+1,open+1,close,n,ds,ans);
            ds.pop_back();
        }
        if(close < open){
        ds.push_back(')');
        solve(i+1,open,close+1,n,ds,ans);
        ds.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string ds;
        vector<string> ans;
        solve(0,0,0,n,ds,ans);
        return ans;
    }
};