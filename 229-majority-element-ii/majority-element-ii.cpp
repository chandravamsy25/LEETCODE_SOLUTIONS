class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int candidate1 = 0, candidate2 = 0, c1 = 0, c2 = 0;

        for (auto num : nums) {
            if (candidate1 == num) c1++;
            else if (candidate2 == num) c2++;
            else if (c1 == 0) candidate1 = num, c1 = 1;
            else if (c2 == 0) candidate2 = num, c2 = 1;
            else c1--, c2--;
        }
         
        c1 = c2 = 0;
        for (int num : nums) {
            if (num == candidate1) c1++;
            else if (num == candidate2) c2++;
        }
        
        vector<int> majority;
        if (c1 > nums.size() / 3) majority.emplace_back(candidate1);
        if (c2 > nums.size() / 3) majority.emplace_back(candidate2);
        
        return majority;
        
    }
};