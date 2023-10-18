class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        vector<int> adj[n+1];
        vector<int> inDeg(n+1,0);
        for(auto &it : relations){
            adj[it[0]].push_back(it[1]);
            inDeg[it[1]]++;
        }

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
        for(int i=1; i<=n; ++i){
            if(inDeg[i] == 0) 
                q.push({time[i-1],i});
        }

        int tym = 0;
        while(!q.empty()){
                int node = q.top().second;
                int Reqtym = q.top().first; 
                q.pop();
                tym = max(tym, Reqtym);

                for(auto &child : adj[node]){
                    inDeg[child]--;

                    if(inDeg[child] == 0){
                        q.push({Reqtym + time[child-1], child});
                    }
                }
        }
        return tym;
        
    }
};