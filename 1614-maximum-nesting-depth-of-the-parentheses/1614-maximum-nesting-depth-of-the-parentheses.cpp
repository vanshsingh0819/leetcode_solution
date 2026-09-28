class Solution {
public:
    int maxDepth(string s) {
        int cnt = 0;
        int n = s.size();
        int maxi = 0;
        for(int i =0;i<=n-1;i++){
            if(s[i]== '('){
                cnt++;
            }
            else if (s[i] == ')'){
                maxi = max(maxi,cnt);
                cnt--;
            }
        }
        return maxi;
    }
};