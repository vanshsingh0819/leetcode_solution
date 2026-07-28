class Solution {
public:
    string smallestPalindrome(string s) {
      vector<int> hash(26,0);
      string first ="";
      string mid = "";
      string ans = "";
      for(int i = 0;i<= s.size()-1;i++){
        hash[s[i]-'a']++;
      }
      for(int i = 0;i<=hash.size()-1;i++){
        if(hash[i] % 2 == 0){
            int temp = hash[i]/2;
            while(temp != 0){
             first += char('a' + i);
             temp--;
            }
        }
        else{
            int tem = hash[i]/2;
            while(tem != 0){
                first += char('a' + i);
                tem--;
            }
            mid = char('a' + i);
        }
      }
      string last = first;
      reverse(last.begin(),last.end());
      ans = first + mid + last;
      return ans;
      }
};