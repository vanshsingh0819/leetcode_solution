class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        int prefixSum = nums[0];
        for(int i =1;i<=n-1;i++){
            if(nums[i] - nums[i-1] == 1){
                prefixSum += nums[i];
            }
            else{
                break;
            }
        }
        unordered_map<int,int> mpp;
        for(int i =0;i<=n-1;i++){
            mpp[nums[i]] == i;
        }
        while(mpp.find(prefixSum) != mpp.end()){
            prefixSum++;
        }
    return prefixSum;
    }
};