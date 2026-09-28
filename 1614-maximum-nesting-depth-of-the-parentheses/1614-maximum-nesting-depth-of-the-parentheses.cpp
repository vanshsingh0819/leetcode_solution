class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int n = s.size();
        int maxi = 0;
        for(int i =0;i<=n-1;i++){
            if(s[i]== '('){
                st.push(s[i]);
            }
            else if (s[i] == ')'){
                maxi = max(maxi,(int)st.size());
                st.pop();
            }
        }
        return maxi;
    }
};