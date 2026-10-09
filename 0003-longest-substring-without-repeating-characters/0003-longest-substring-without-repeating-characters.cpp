class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_map<int,int> mpp;
       int n = s.size();
       int l = 0;
       int len = 0;
       for(int r =0;r<=n-1;r++) {
        while(mpp.find(s[r]) != mpp.end()){
            mpp[s[l]]--;            
            if(mpp[s[l]] == 0){
                mpp.erase(s[l]);
            }
            l++;
        }
        len = max(len,r-l+1);
        mpp[s[r]]++;
       }
       return len;
    }
};