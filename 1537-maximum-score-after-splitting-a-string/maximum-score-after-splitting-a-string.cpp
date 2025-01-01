class Solution {
public:
    int maxScore(string s) {
        int solution=0,begin=0,end=0,zero=0,one=0;
        for(int i=1;i<s.length();i++){
            if(s[i]=='1') one++;
        } 

        for(int i=1;i<s.length();i++){
            if(s[i-1]=='0') zero++;
            solution=max(solution,zero+one);
            if(s[i]=='1') one--; 
        } 
        
        return solution;
        
        
    }
};