class Solution {
public:
    string removeDigit(string number, char digit) {
        string answer;
        for(int i=0;i<number.length();i++)
        {
            if(number[i]==digit )
            {
                answer=max(answer,number.substr(0,i)+number.substr(i+1,number.length()));
            }   
        }
        return answer;
       
    }
};