class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> ump;
        for (char ch : s) {
            ump[ch]++;
        }
        int count = 0;
        bool Odd = false;

        for (auto& i : ump) {
            if (i.second % 2 == 0) {
                count += i.second;
            } else {
                count += i.second - 1;
                Odd = true;
            }
        }
       
        if (Odd) {
            count += 1;
        }

        return count;
    }
};