class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int d;
        vector<bool> v1;
        bool flag=true;
        for(int i=0;i<l.size();i++){
            vector<int> v2=nums;
            sort(v2.begin()+l[i],v2.begin()+r[i]+1);
            d=v2[l[i]+1]-v2[l[i]];
            flag=true;
            for(int j=l[i];j<r[i];j++){
                if(v2[j+1]-v2[j]!=d){
                    v1.emplace_back(false);
                    flag=false;
                    break;
                }
            }
            if(flag)
                v1.emplace_back(true);
        }
        return v1;
    }
};