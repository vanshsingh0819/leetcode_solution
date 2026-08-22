class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int product = 1;
        int dup = n;
        while(n > 0){
            int digit = n % 10;
            n=n/10;
            sum += digit;
            product *= digit;
        }
        int div = sum + product;
        if(dup % div == 0) return true;
        return false;
    }
};