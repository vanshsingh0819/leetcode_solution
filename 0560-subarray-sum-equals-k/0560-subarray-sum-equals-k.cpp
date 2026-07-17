class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        mpp[0]=1;
        int cnt=0;
        int presum = 0;
        
        for(int i = 0;i<=n-1;i++){
           presum = presum + nums[i];
           cnt = cnt + mpp[presum - k];
           mpp[presum]++; 
        }        

        return cnt;
    }
};