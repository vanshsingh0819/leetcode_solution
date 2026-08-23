class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        int leftq = 0;
        int leftsum = 0;
        for(int i =0;i<n/2;i++){
            if(num[i] == '?'){
                leftq++;
            }
            else{
                int digit = num[i] - '0';
                leftsum += digit;
            }
        }

        int rightq = 0;
        int rightsum = 0;
        for(int i = n/2;i <= n-1;i++){
            if(num[i] == '?'){
                rightq++;
            }
            else{
                int digit = num[i] - '0';
                rightsum += digit;
            }
        }

        int totalq = leftq + rightq;
        if(totalq % 2 != 0) return true;  //Alice will win; he will always have the last choice to make it uneven.

        int left = 2 * leftsum + 9 * leftq;
        int right = 2 * rightsum + 9 * rightq;

        if(left == right) return false;
        return true;

    }
};