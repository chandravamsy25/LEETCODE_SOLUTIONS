class Solution {
public:
    int lengthOfLastWord(string s) {
        int k=s.length();
        int count=0;
        for(int i =k-1;i>=0;i--)
        {
            
           
            if(s[i]==' ' && count>=1 ) break;
            
            if(s[i]!=' ') count++;
            

        }
        
        return count;
    }
};