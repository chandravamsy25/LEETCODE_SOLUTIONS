class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size() < k) return false;
        if (s.size() == k) return true;
        unordered_map<char,int>mp;

        for(char ch : s){
            mp[ch]++;
        }

        int count  = 0;
        for(auto key : mp){
            if(key.second%2 == 1) count++;
        }
        return (count > k)?false:true;
    }
};