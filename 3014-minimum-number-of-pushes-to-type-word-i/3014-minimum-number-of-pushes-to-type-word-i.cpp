class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
       // if(n <= 8) return n;
        int ans = 0;
        for(int i = 0;i<=n-1;i++){
            if(i <= 7){
                ans++;
            }
            else if(i >= 8 && i <= 15){
                ans= ans+2;
            }
            else if(i >= 16 && i <= 23){
                ans = ans + 3;
            }
            else{
                ans = ans +4;
            }
        }
        return ans;
        }
};