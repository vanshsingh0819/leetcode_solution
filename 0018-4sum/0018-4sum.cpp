class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        set<vector<int>> st;
        for(int i =0;i<=n-3;i++){
            for(int j =i+1;j<=n-2;j++){
                unordered_set<long long> hst;
                for(int k =j+1;k<=n-1;k++){
                    long long sum = (long long) nums[i] + nums[j]+ nums[k];
                    long long forth = (long long) target - sum;
                    if(hst.find(forth) != hst.end()){
                        vector<int> ans = {nums[i],nums[j],nums[k], (int)forth};
                        sort(ans.begin(),ans.end());
                        st.insert(ans);
                    }
                        hst.insert(nums[k]);
                }
            }
        }
        return vector<vector<int>> (st.begin(),st.end());
    }
};