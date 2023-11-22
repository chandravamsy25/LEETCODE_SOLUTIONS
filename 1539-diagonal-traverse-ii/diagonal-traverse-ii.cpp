class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<list<int>> data;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums[i].size(); j++) {
                if (i+j == data.size()) 
                    data.push_back(list<int>());
                data[i+j].push_front(nums[i][j]);
            }
        }
        vector<int> ans;
        for (auto &li: data) {
            ans.insert(ans.end(), li.begin(), li.end());
        }
        return ans;
    }
};