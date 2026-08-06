class Solution {
public:
    int smallestNumber(int n, int t) {
        int i = n;
        while(i >= n){
            int ans = 1;
            int val = i;
            while(val > 0){
                int lastdigit =val % 10;
                ans=ans * lastdigit;
                val = val/10;
            }
            if(ans % t ==0) return i;
            i++;
        }
        return -1;
    }
};