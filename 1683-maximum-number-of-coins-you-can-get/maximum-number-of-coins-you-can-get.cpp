class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int k =(piles.size()/3);
        int sum=0;
        for(int i=k;i<piles.size();i++ )
        {
            sum= sum+piles[i];
            i++;

        }
        return sum;
        
    }
};