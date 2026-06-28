class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int n = arr.size();
        int maxele = 1;
        sort(arr.begin(),arr.end());
        arr[0] = 1;
        for(int i = 1;i<=n-1;i++){
            if(abs(arr[i] - arr[i - 1]) > 1){
                arr[i] = arr[i-1]+1;
            }
            maxele = max(maxele,arr[i]);
        }
        return maxele;
    }
};