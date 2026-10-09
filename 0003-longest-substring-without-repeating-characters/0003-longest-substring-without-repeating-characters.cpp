class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int l = 0;
        int len = 0;
        unordered_map<char,int> mpp;
        for(int r=0;r<=n-1;r++){
            if(mpp.find(s[r]) != mpp.end()){
              l = max(l,mpp[s[r]]+1); // 
            }
            mpp[s[r]] = r;
            len = max(len,r-l+1);
        }
        return len;
    }
};