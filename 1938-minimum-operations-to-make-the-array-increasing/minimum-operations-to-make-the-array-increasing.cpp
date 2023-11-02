class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count =0;
        if (nums.size()<=1) return 0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<=nums[i-1])
            {
                
                if (nums[i-1]>nums[i])
                {
                    
                    count =count +(nums[i-1]-nums[i])+1;
                    nums[i]=nums[i-1]+1;

                } 
                
                else count++;
                nums[i]=nums[i-1]+1;
                
            }
        }
        cout<<nums.size();
        return count ;
        
    }
};