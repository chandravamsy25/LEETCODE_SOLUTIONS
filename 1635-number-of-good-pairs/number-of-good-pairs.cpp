class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int i=0;
        int count =0;

        while(i<nums.size()){
        
        
        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[i]==nums[j])
            {
                count++;
            }
            
           
            



        }
        i++;

        }
        return count;
        
    }
};