class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;

        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }

        int k=nums.size()/2;

        for(auto i : freq){
            if(i.second>k)
            {
                return i.first;
            }
        }
        return 0;
    }
};