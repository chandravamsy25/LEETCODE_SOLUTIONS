class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int ans = 0, n1 = nums1.size(), n2 = nums2.size();
        if(n2%2==1){
            for(int i=0; i<n1; i++)
                ans ^= nums1[i];
        }
        if(n1%2==1){
            for(int i=0; i<n2; i++)
                ans ^= nums2[i];
        }
        return ans;
    }
};