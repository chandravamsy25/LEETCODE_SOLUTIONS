class Solution {
public:
    bool check(vector<int>& nums) {
       
        vector<int>temp1(nums.size());
        temp1=nums;
        sort(temp1.begin(),temp1.end());
        

        
        vector<int>temp(nums.size());
        
        int k=0;
        while(k<nums.size())
        {
            for(int i=0;i<nums.size();i++)
            {
                temp[(i+k)%nums.size()]=temp1[i];
            }

            if(temp == nums)
            {
                return true;
            }
            else
            {
                k++;
            }


        }
        return false ;
        

        
    }
};