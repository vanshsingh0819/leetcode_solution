class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n = digits.size();
        int ans = 0;
        set<int> st;
        for(int i =0;i<=n-1;i++){
            if(digits[i] == 0) continue;
            for(int j = 0;j<=n-1;j++){
                if(j == i) continue;
                for(int k = 0;k<=n-1;k++){
                    if(k == j || k == i) continue; 
                    int sum = digits[i] * 100 + digits[j] * 10 + digits[k];
                    if(sum % 2 == 0){
                        st.insert(sum);
                    }
                }
            }
        }
        return st.size();;
    }
};