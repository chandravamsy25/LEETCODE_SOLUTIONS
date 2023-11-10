class Solution {
    
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        int n = adjacentPairs.size()+1;
        vector<int> v;
        unordered_map<int, vector<int>> adj;
        for(auto vec : adjacentPairs) {
            adj[vec[0]].push_back(vec[1]);
            adj[vec[1]].push_back(vec[0]);
        }
        vector<int> nodes;
        unordered_map<int, int> vis;
        int start;
        for(auto it = adj.begin(); it != adj.end(); ++it) {
            nodes.push_back(it->first);
            vis[it->first] = 0;
            if(it->second.size() == 1) start = it->first;
        }
    
        vector<int> ans;
        stack<int> s;
        s.push(start);
        while(s.size() != 0) {
            int cur = s.top();
            s.pop();
            vis[cur] = 1;
            ans.push_back(cur);
            for(int x : adj[cur]) {
                if(vis[x] == 0) s.push(x);
            }
        }
        return ans;
    }
};