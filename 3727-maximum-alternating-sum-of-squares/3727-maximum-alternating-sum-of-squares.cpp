class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        for(int i =0;i<=n-1;i++){
            nums[i] = nums[i] * nums[i];
        }
        sort(nums.begin(),nums.end());
        int i = 0;
        int j = n-1;
        long long ans = 0;
        while(i < j){
            ans += nums[j] - nums[i];
            i++;
            j--; 
        }
        if(i == j){
            ans += nums[i];
        }
        return ans;
    }
};