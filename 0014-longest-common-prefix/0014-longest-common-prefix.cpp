class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(strs.empty()) return "";
        sort(strs.begin(), strs.end()); 
        string first = strs.front();   //strs[0];
        string last = strs.back();       //strs[n - 1];
        int i =0;
        while(i<first.size() && first[i] == last[i]){
            i++;
        }
        return first.substr(0,i);
    }
};