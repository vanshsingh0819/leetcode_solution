class Solution {
public:
    int FindDaysReq(vector<int>& weights, int cap) {
       int n = weights.size();
       int load = 0;
       int days = 1;
       for(int i =0;i<=n-1;i++){
        if(load + weights[i] > cap){
            days++;
            load = weights[i];
        }
        else{
            load = load +weights[i];
        }
       }
       return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
       int low = *max_element(weights.begin(),weights.end());
       int high = accumulate(weights.begin(), weights.end(), 0);
       int ans = -1;
       while(low<=high){
        int mid = low+(high-low)/2;
        int daysReq = FindDaysReq(weights,mid) ;
        if(daysReq <= days){
            ans = mid;
            high = mid -1;
        }
        else{
            low = mid+1;
        }
       }
       return ans;
    }
};