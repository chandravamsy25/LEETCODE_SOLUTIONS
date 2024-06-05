class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans;
        vector<int> curr(26), pre(26);

        for (auto &ch : words[0])
            pre[ch - 'a']++;

        for (int i = 1; i < words.size(); i++)
        {
            for (auto &ch : words[i])
                curr[ch - 'a']++;

            for (int i = 0; i < 26; i++)
            {
                pre[i] = min(pre[i], curr[i]);
                curr[i] = 0;
            }
        }

        for (int i = 0; i < 26; i++)
        {
            string x = string(1, (char)(i + 'a'));
            while(pre[i]--)
                
                ans.push_back(x);
                
        }
        return ans;
    }
};