class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int n=grid[0].size();
    
    long long first=0, second=0,res= LLONG_MAX;;
    for(int i=n-1;i>-1;--i){
        first += grid[0][i];
    }
    

    for(int i=0;i<n;++i){
        first-=grid[0][i];
        res=min(res, max(first,second));
        second+=grid[1][i];
    }
    return res;
        
    }
};