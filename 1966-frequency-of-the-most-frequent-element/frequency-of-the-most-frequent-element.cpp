class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long count = 0, n = nums.size(), op = 1, sum = 0;
        for (int j = 0; j < n; ++j) {
            sum += nums[j];
            while ((j - count + 1) * nums[j] - sum > k) sum -= nums[count++];
            op = max(op, j - count + 1);
        }
        return op;
       
        
    }
};