class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        long long int rightsum=0,leftsum=0;
        for(int num:nums){
            rightsum+=num;
        }
        

        for(int i=0;i<nums.size();i++){
           if(i==0) leftsum=0;
           else leftsum+=nums[i-1];

           rightsum-=nums[i];

           if(leftsum==rightsum) return i;
        }
        
        return-1;

    }
};