class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max,min;
        int i=0,j=nums.size()-1;
        max=(nums[j]*nums[j-1]);
        min=(nums[i]*nums[i+1]);
        return max-min;
            
            
            
        
        
    }
};