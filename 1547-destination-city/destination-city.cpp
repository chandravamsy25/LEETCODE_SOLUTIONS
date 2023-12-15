class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,vector<string>> adj;
        for(int i=0; i<paths.size(); i++){
            string u = paths[i][0];
            string v = paths[i][1];

            adj[u].push_back(v);
        }
        for(int i=0; i<paths.size(); i++){
            string v = paths[i][1];
            if(adj.find(v) == adj.end())    return v;
        }
        
        return "";
        
    }
};