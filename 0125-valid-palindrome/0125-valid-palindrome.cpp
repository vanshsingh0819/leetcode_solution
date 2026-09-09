class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int i = 0;
        int j = n-1;
       while(i < j){
        while(i < j && isalnum(s[i]) == false){
            i++;
        }
        while(i < j && isalnum(s[j]) == false){
            j--;        
       }
       if(tolower(s[i]) != tolower(s[j])) return false;
       j--;
       i++;
    }
    return true;
    }
};