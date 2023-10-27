class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0;
        int k=nums.size();
        while(i<k)
        {
            if(nums[i]==target)
            {
                return i;
            }
            
            if(nums[i]!=target && i==k-1)
            {
                int j=1;
                if(nums[0]>target) return 0;
                if(nums[k-1]<target) return k;
                while(j<k)
                {
                   
                    if(nums[j-1]<target && nums[j]>target) return j;
                    j++;
                    
                }


            }
            i++;

        }
    return -1;

        
    }
};