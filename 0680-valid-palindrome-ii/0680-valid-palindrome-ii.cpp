class Solution {
public:
    bool palindrone(string s,int i,int r){
        while(i < r){
        if(s[i] == s[r]){
            i++;
            r--;
        }
        else{
            return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
       int n = s.size();
       int i = 0;
       int r = n-1;
       int count=0;
       while(i < r){
        if(s[i] == s[r]){
            i++;
            r--;
        }
        else if(s[i]!=s[r] && count < 1){
            count++;
            return palindrone(s,i+1,r) || palindrone(s,i,r-1);   
        }
       }
       return true; 
    }
};