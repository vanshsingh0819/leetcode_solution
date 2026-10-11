class Solution {
public:
    int sumOfSquares(vector<int>& nums){
        int n = nums.size();
        int sumSquare = 0;
        for(int i =0;i<=n-1;i++){
            int j = i+1;
            if(n % j == 0){
                int square = nums[i]*nums[i];
                sumSquare += square;
            }
        }
        return sumSquare;
    }
};