class Solution {
public:
    bool isPalindrome(int x) {
        double  r=0;
        int val=x;
        while (val>0)
        {
        
             r = (r*10)+val%10;
             val=val/10;
        }

        if(r == x ) 
        {
            return true;

        }
        else 
        {
            return false ;

        }
        
        
    }
};