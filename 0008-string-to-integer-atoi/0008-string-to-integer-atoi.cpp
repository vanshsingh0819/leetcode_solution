class Solution {
public:
    long long solve(string s,int i,long long num,int sign){
    
        if(i >= s.size() || !isdigit(s[i])){
            return num * sign;
        }
        int digit = s[i] -'0';
        if(num > (INT_MAX - digit)/10){
            if(sign == -1) return INT_MIN;
            else return INT_MAX;
        }
        return solve(s,i+1,num*10+digit,sign);
    }
    int myAtoi(string s) {
        int n = s.size();
        int i = 0;
        while(i < n && s[i] == ' '){
            i++;
        }
        int sign = 1;
        if(i < n && s[i] == '-'){
            sign = -1;
            i++;
        }
        else if(i < n && s[i] == '+'){
            i++;
        }
        return solve(s,i,0,sign);
    }
};