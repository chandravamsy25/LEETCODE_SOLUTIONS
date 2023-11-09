class Solution {
public:
int mod = 1e9+7;
    int countHomogenous(string s) {
        long long ans =1;
        int prev = 1;
        for(int i=1;i<s.size();i++){
            if(s[i-1]==s[i])prev+=1;
            else prev =1;
            ans+=prev;
            ans%=mod;
        }
        return ans;
        
    }
};