class Solution {
public:
    bool isValid(string s) {
        int n =s.size();
        stack<int> st;
        for(int i = 0;i<=n-1;i++){
            if(s[i] == '(' || s[i] == '{' ||s[i] == '['){
                st.push(s[i]);
            }
                     
            else if(!st.empty() && (s[i] == ')' && st.top() == '(' || 
               s[i] == '}' && st.top() == '{' ||
               s[i] == ']' && st.top() =='[')){
                st.pop();
            }
            else { /*(st.empty() && 
                     (s[i] == '(' || s[i] == '{' ||s[i] == '['))*/
                return false;
            }
        }
    return st.empty();
    }
};