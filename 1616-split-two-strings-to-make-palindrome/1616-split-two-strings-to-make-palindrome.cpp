class Solution {
public:
    bool solve(string a,int i ,int j){
     while(i<j){
        if(a[i] == a[j]){
            i++;
            j--;
        }
        else{
            return false;
        }        
     }
     return true;
    }
    bool fn(string a, string b){
        int n = a.size();
        int i = 0;
        int j = n-1;
        while(i<j && a[i]==b[j]){
            i=i+1;
            j=j-1;
        }
        if(i >= j)
            return true;
        return solve(a,i,j)||solve(b,i,j);   
    }
    bool checkPalindromeFormation(string a, string b) {
        if(a.size()==1 || b.size()==1) return true;
        return fn(a,b) || fn(b,a);
    }
};