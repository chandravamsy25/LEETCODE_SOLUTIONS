class Solution {
public:
    int n;
    
    pair<int, int> getPos(int num) {
        int r = n - 1 - (num - 1) / n;
        int c = (num - 1) % n;
        if ((n - 1 - r) % 2 == 1) c = n - 1 - c;
        return {r, c};
    }

    int snakesAndLadders(vector<vector<int>>& board) {
        n = board.size();
        vector<bool> vis(n * n + 1, false);
        queue<pair<int, int>> q; // {square number, steps}
        q.push({1, 0});
        vis[1] = true;

        while (!q.empty()) {
            auto [num, steps] = q.front();
            q.pop();

            if (num == n * n) return steps;

            for (int k = 1; k <= 6 && num + k <= n * n; ++k) {
                int next = num + k;
                auto [r, c] = getPos(next);
                if (board[r][c] != -1) {
                    next = board[r][c];
                }
                if (!vis[next]) {
                    vis[next] = true;
                    q.push({next, steps + 1});
                }
            }
        }

        return -1;
    }
};