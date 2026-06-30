class Solution {
public:
    int numberOfSubstrings(string s) {
       int n = s.size();
       int l =0 ;
       int cnt = 0;
       unordered_map<int, int>mpp;
       for(int r =0;r<=n-1;r++) {
        mpp[s[r]]++;
        while(mpp.size() == 3){
            cnt += n-r;
            mpp[s[l]]--;
            if(mpp[s[l]] == 0){
                mpp.erase(s[l]);
            }
            l++;
        }
       }
       return cnt;
    }
};