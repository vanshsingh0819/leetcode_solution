class Solution {
public:
vector<string> mp = {
      "","","abc",
      "def","ghi","jkl",
      "mno","pqrs","tuv",
      "wxyz"
      };
void fn(int idx,string digits,string &ds,vector<string> &ans){
    int n = digits.size();
    if(idx == n){
        ans.push_back(ds);
        return;
    }
    string letters = mp[digits[idx] - '0'];
    for(int i =0;i < letters.size();i++){
        ds.push_back(letters[i]);
        fn(idx+1,digits,ds,ans);
        ds.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string ds ="";
        fn(0,digits,ds,ans);
        return ans;
    }
};