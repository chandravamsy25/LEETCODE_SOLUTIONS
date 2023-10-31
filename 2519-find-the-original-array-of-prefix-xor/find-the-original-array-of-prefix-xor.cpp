class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n= pref.size();
        int pref_xor=0;
        
       

        for(int i=1;i<n;i++)
        {
            pref_xor ^=pref[i-1];
            pref[i]=pref_xor^pref[i];
        }
        return pref;
        
    }
};