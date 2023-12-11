class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int onefourth= arr.size()/4;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==arr[i+onefourth])
            
            return arr[i];
            
        }
         
        return 0;

        
    }
    
};