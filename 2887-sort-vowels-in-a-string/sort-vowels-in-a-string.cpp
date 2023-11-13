class Solution {
public:
    string sortVowels(string s) {
        vector<char>v;
        for(auto c :s)
        {
            if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u' or c=='A' or c=='E' or c=='I' or c=='U' or c=='O')
            {
                v.push_back(c);
            }
        }
        string ans;
        sort(v.begin(),v.end());
        int i=0;
        for(auto c:s)
        {
            if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u' or c=='A' or c=='E' or c=='I' or c=='U' or c=='O')
            {
                ans+=v[i];
                i++;
            }
            else ans+=c;
        }
        return ans;
    
        
    }
};