class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        
        int boundary=0,count=0;
        for(int i=0;i<nums.size();i++)
        {
            boundary+=nums[i];
            if(boundary==0) count++;
            
        }
        return count;
        
    }
};