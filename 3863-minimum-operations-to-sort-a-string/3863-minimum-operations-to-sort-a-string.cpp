class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        char mn ='z';
        char mx ='a';
        if(is_sorted(s.begin(),s.end()))return 0;
        if(s.size() == 2) return -1;
        for(int i = 0;i<=n-1;i++){
            mx = max(mx,s[i]);
            mn = min(mn,s[i]);
        }
        if(s[0] == mn || s[n-1] == mx) return 1;
       
        int cnt = 0;
        for(int i = 0;i<=n-1;i++){
            if(s[i]==mx || s[i]==mn){
                cnt++;
            }
        }
        
        if(s[0] == mx && s[n-1] == mn){
            if(cnt == 2){
                return 3;
            }
        }    
        return 2;
    }
};