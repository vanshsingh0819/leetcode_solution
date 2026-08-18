class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mpp;
        int ans =-1;
        if(k == n) return *max_element(nums.begin(),nums.end());
        for(int i =0;i<=n-1;i++){
            mpp[nums[i]]++;
        }
        if(k == 1){
            for(auto it : mpp){
                if(it.second == 1){
                    ans = max(ans,it.first);
                }
            }
        }
        else{
            int first = mpp[nums[0]];
            int last = mpp[nums[n-1]];
            if(first == 1 && last == 1) return max(nums[0],nums[n-1]);
            else if(first ==1) return nums[0];
            else if(last ==1) return nums[n-1];
        }

        return ans;
    }
};