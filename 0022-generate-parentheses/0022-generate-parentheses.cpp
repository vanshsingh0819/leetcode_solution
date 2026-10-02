class Solution {
public:
    bool validParenthesis(string &ds){
        stack<char> st;
        for(int i =0;i<=ds.size()-1;i++){
            if(ds[i] == '('){
                st.push(ds[i]);
            }
            else{
                if(st.empty()) return false;
                else if(ds[i] == ')' && st.top() == '('){
                    st.pop();
                }
            }
        }
        return st.empty();
    }
    void solve(int i ,int n, string &ds,vector<string> &ans){
        if(i == 2*n){
            if(validParenthesis(ds) == true){
                ans.push_back(ds);
            }
            return;
        }
        ds.push_back('(');
        solve(i+1,n,ds,ans);
        ds.pop_back();
        ds.push_back(')');
        solve(i+1,n,ds,ans);
        ds.pop_back();
    }
    vector<string> generateParenthesis(int n) {
        string ds;
        vector<string> ans;
        solve(0,n,ds,ans);
        return ans;
    }
};