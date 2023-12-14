class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        
        int m=grid.size();
        int n=grid[0].size();
        
        vector<int> row(m,0);
        vector<int> column(n,0);
        vector<vector<int>> diff(m, vector<int>(n, 0));
    

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==0) row[i]--;
                if(grid[i][j]==1) row[i]++;    
            
            }
            
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[j][i]==0) column[i]--;
                if(grid[j][i]==1) column[i]++;    
            
            }
            
        }

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                diff[i][j]=row[i]+column[j];
            }
        }

        return diff;
        
        
    }
};