class Solution {
public:
       int countNicePairs(vector<int>& nums) {
        long count = 0; int MAX = 1000000000 + 7;
        std::map<int, int> diffs;
        for (int i = 0; i < nums.size(); i++) {
            if (diffs.find(nums[i] - rev(nums[i])) == diffs.end())
                diffs[nums[i] - rev(nums[i])] = 0;
            diffs[nums[i] - rev(nums[i])]++;
            count = (count + diffs[nums[i] - rev(nums[i])] - 1) % MAX;
        }
        return count;
    }
    
    int rev(int x){
	    int revX = 0;
	    while (x > 0) {
            revX = revX * 10 + (x % 10);  x /= 10;
        }
	    return revX;
    }
};