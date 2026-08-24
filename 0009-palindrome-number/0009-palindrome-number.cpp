class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        int n=x;
        long reverseano = 0;
        while(x>0){
            int lastdigit = x%10;
            x=x/10;
            reverseano =  (reverseano * 10) +lastdigit;
            }
            return n == reverseano;
        }
};