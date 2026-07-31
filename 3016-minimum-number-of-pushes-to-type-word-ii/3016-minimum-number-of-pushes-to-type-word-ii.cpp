class Solution {
public:
    int minimumPushes(string word) {
       int n = word.size();
       vector<int> hash(26,0);
       for(int i =0;i<=n-1;i++){
           hash[word[i] - 'a']++;
       }
       sort(hash.begin(),hash.end(),greater<int>());
       int ans = 0;
       for(int i =0;i<hash.size();i++){
        if(i <= 7){
            ans = ans + hash[i];
        }
        else if(i <= 15){
            ans = ans + 2*hash[i];
        }
        else if(i<=23){
            ans = ans + 3*hash[i];
        }
        else{
            ans = ans + 4*hash[i];
        } 
        }
        return ans;
       }
};