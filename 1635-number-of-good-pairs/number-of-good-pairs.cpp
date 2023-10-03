class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count =0;
        unordered_map<int,int> arr;
        for(int x:nums)
        {
            count+=arr[x]++;
        }
        return count;
        
    }
};