class Solution {
public:
    bool winnerOfGame(string colors) {
        int bound=colors.length()-1;
        int i=1;
        int alice=0;
        int bob =0;

        while(i>0 && i<=bound) 
        {
            if(colors[i]=='A')
            {
                if(colors[i-1]==colors[i+1]&& colors[i-1]=='A')
                {
                    alice++;
                }

            }
            else 
            {
                if(colors[i-1]==colors[i+1] && colors[i-1]=='B')
                {
                    bob++;
                }
            }

            i++;
           
        }
        if(alice==bob)
        {
            return false;
        }
        else if(alice>bob)
        {
            return true;
        }
        else
        {
            return false;
        }

       
    } 
    
};