class Solution {
public:
    int maximumLengthSubstring(string s) {
       int n = s.size();
       int l =0;
       int maxlen = INT_MIN;
       unordered_map<int,int> mpp;
       for(int r =0;r<=n-1;r++){
        mpp[s[r]]++;
        while(mpp[s[r]] > 2){
            mpp[s[l]]--;
            l++;
        }
        maxlen = max(maxlen,r-l+1);
       }
       return maxlen;
    }
};