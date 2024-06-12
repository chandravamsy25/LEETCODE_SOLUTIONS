class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeros=0,ones=0,twos=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0) zeros++;
            else if(nums[i]==1) ones++;
            else twos++;
        }
        for(int j=0;j<zeros;j++){
            nums[j]=0;
        }
        for(int j=zeros;j<zeros+ones;j++){
            nums[j]=1;

        }
        for(int k=zeros+ones;k<nums.size();k++)
        {
            nums[k]=2;
        }
        
    }
};