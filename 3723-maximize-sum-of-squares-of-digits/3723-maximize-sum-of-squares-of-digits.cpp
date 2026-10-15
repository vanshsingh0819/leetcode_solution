class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans = "";
        
        for(int i = 1; i <= num; i++){
            if (i == num && sum > 9){
                return "";
            }
            else if(sum >= 9){
                ans += '9';
                sum -= 9;
            }
            else{
               ans += char(sum + '0');
               sum = 0;
            }
        }
        return ans;
    }
};