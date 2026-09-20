class Solution {
public:
    int reverseDegree(string s) {
        int n = s.size();
        int sum = 0;
        for(int i = 0;i<=n-1;i++){
            int nums = abs(s[i] - 'a' - 26);   // 26-(s[i] - 'a')
            int mult = nums * (i+1);
            sum = sum + mult;
        }
        return sum;
    }
};