class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int, int> ballmp, colormp;
        int cnt = 0;
        vector<int> ans;
        for (auto q : queries) {
            int ball = q[0], color = q[1];
            if (ballmp[ball] != 0) {
                int prev = ballmp[ball];
                colormp[prev]--;
                if (colormp[prev] == 0) {
                    cnt--;
                }
            }
            if (colormp[color] == 0) cnt++;
            ballmp[ball] = color;
            colormp[color]++;
            ans.push_back(cnt);
        }
        return ans;
    }
};