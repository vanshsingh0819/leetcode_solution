class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        for(int i =0;i<=n-1;i++){
            mpp[nums[i]]++;
        }
        
        for(int i = k;i<= INT_MAX;i+=k){
            if(mpp.find(i) == mpp.end()){
                return i;
            }
        }
        return -1;
    }    
};