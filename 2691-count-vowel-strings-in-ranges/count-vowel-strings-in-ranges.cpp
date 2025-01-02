class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        vector<int> prefixSum(n + 1, 0); // Prefix sum array to count valid vowel strings
        
        // Precompute the prefix sums
        for (int i = 0; i < n; i++) {
            int length = words[i].length();
            if ((words[i][0] == 'a' || words[i][0] == 'e' || words[i][0] == 'i' || 
                 words[i][0] == 'o' || words[i][0] == 'u') &&
                (words[i][length - 1] == 'a' || words[i][length - 1] == 'e' || 
                 words[i][length - 1] == 'i' || words[i][length - 1] == 'o' || 
                 words[i][length - 1] == 'u')) {
                prefixSum[i + 1] = prefixSum[i] + 1;
            } else {
                prefixSum[i + 1] = prefixSum[i];
            }
        }
        
        vector<int> ans(queries.size());
        
        // Answer each query using the prefix sums
        for (int i = 0; i < queries.size(); i++) {
            int l = queries[i][0];
            int r = queries[i][1];
            ans[i] = prefixSum[r + 1] - prefixSum[l];
        }
        
        return ans;
    }
};
