class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {

        int length=0;
        string word11;
        string word22;

        

        for(int i=0;i<word1.size();i++)
        {
            word11=word11+word1[i];
        }

        for(int j=0;j<word2.size();j++)
        {
            word22=word22+word2[j];
        }
        
        if(word11==word22) return true;
        

        return false;
        
    }
};