class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int element =0;
        for(int i =0;i<=n-1;i++){
            if(cnt == 0){
                element = nums[i];
                cnt = 1;
            }
            else if(element == nums[i]){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cnt1 = 0;
        for(int i =0;i<=n-1;i++){
            if(element == nums[i]){
                cnt1++;
            }
        }
        if(cnt1 > n/2) return element;
        return -1;
    }
};