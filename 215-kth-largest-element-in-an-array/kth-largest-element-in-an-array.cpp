class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int largest=nums.size()-k;

        return nums[largest];
    }
};