class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long int leftsum=0,rightsum=0;
        int count=0;

        for(int num:nums){
            rightsum+=num;
        }

        for(int i=0;i<nums.size()-1;i++){
            leftsum+=nums[i];
            rightsum-=nums[i];

            if(leftsum>=rightsum) count++;
        }


        
            

        

        return count;
        
    }
};