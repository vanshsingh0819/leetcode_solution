class Solution {
public:
    vector<int> generaterows(int row){
        long long ans = 1;
        vector<int> nth_row;
        nth_row.push_back(ans);
        for(int i = 1;i<row;i++){
            ans *= (row-i);
            ans /= i;
            nth_row.push_back(ans);
        }
        return nth_row;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascaltrianle;
        for(int i = 1;i<=numRows;i++){
            pascaltrianle.push_back(generaterows(i));
        }
        return pascaltrianle;
    }
};