class Solution {
public:
    bool isAnagram(string s, string t) {
        int n =s.size();
        int m =t.size();
        if(n!=m)return false;
        vector<int> freq(26,0);
        for(int i = 0; i<=n-1; i++){
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }
        for(int i =0 ;i<freq.size();i++){
            if(freq[i] != 0) return false;
        }
        return true;
    }
};