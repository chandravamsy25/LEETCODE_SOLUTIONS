class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>arr3;
        vector<int>arr4;
        
        int count;
        sort(arr3.begin(),arr3.end());
        vector<bool>freq(false);
       
        for(int i=0;i<arr1.size();i++)
        {
            count=0;
            for(int j=0;j<arr2.size();j++)
            {
                if(arr1[i]==arr2[j]) count++;
     
            }
            if(count==0) arr4.emplace_back(arr1[i]);
        }
        sort(arr4.begin(),arr4.end());
        
        for(int i=0;i<arr2.size();i++)
        {
            for(int j=0;j<arr1.size();j++){
                if(arr1[j]==arr2[i]){
                    arr3.emplace_back(arr1[j]);
                    
                }
            }
        }
        
        for(int i=0;i<arr4.size();i++){
            arr3.emplace_back(arr4[i]);
        }
        return arr3;
        
        
    }
};