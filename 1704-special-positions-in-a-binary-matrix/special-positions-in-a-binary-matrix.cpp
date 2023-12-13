class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int i, j, k, ans=0;
        for(i=0 ; i<mat.size() ; i++)
        {
            if(count(mat[i].begin(), mat[i].end(), 1)==1)
            {
                for(j=0 ; j<mat[0].size() ; j++)
                {
                    if(mat[i][j]==1)
                    {
                        for(k=0 ; k<mat.size() ; k++)
                        {
                            if(mat[k][j]==1 && k!=i)
                            {
                                break;
                            }
                        }
                        if(k==mat.size())
                        {
                            ans++;
                        }
                    }
                }
            }
        }
        return ans;
    }
};