class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        int n = knowledge.size();
        unordered_map<string,string> mpp;
        for(int i =0;i<=n-1;i++){
            mpp[knowledge[i][0]] = knowledge[i][1];
        }
        string eval ="";
        int m = s.length();
        for(int i =0;i<=m-1;i++){
            if(s[i] == '('){
                i++;
                string ans  = "";
                while(i < m){
                    if(s[i] == ')') break;
                    ans +=s [i];
                    i++;
                }
                if(mpp.find(ans) != mpp.end()){
                eval += mpp[ans];
                }
                else{
                    eval +='?';
                }
            }
            else{
                eval += s[i];
            }  
        }
        return eval;
    }
};