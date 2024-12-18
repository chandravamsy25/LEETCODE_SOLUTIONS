class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> op(n); 
        for(int i = 0; i < n; i++) {
            op[i] = prices[i]; 
            for(int j = i + 1; j < n; j++) {
                if(prices[j] <= prices[i]) {
                    op[i] = prices[i] - prices[j];
                    break; 
                }
            }
        }
        return op;
    }
};
