class Solution {
public:
    int maxCoins(vector<int>& piles) {
        // Sorting the piles in ascending order
        sort(piles.begin(), piles.end());
        
        // Calculating the number of piles to consider in each move
        int k = piles.size() / 3;
        
        // Initializing the sum to store the maximum coins
        int sum = 0;
        
        // Iterating through the sorted piles to collect maximum coins
        for (int i = k; i < piles.size(); i += 2) {
            sum += piles[i];
        }
        
        return sum;
    }
};