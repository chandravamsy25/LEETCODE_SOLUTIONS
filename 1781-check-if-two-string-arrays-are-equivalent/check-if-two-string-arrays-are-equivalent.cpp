class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {

        int length=0;
        string word11;
        string word22;

    
        for(auto i:word1)
        {
            word11+=i;
        }

        for(auto i:word2)
        {
            word22+=i;
        }
        
    

        return word11==word22;
        
    }
};