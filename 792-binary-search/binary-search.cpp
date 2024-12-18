class Solution {
public:
    int search(vector<int>& nums, int target) {
        int middle=nums.size()/2;
    
        if(target==nums[middle]) return middle ;
        else if(target<nums[middle]){
            for(int i=0;i<middle;i++){
                if(nums[i]==target) return i;
            }
        }
        else {
            for(int i=middle+1;i<nums.size();i++){
                if(nums[i]==target) return i;
            }
        }
        return -1;
    }
    
};