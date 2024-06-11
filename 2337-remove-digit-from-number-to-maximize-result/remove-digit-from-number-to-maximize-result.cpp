class Solution {
public:
    string removeDigit(string number, char digit) {
        string answer;
        int j=0,count=0;
        for(int i=0;i<number.length();i++)
        {
            if(number[i]==digit && count==0)
            {
                string temp=number.substr(0,i)+number.substr(i+1,number.length());
                
                answer=max(answer,temp);

            }
            
            
            
        }
        return answer;
       
    }
};