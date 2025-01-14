class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>C(B.size());
        int count=0;
        int i=0;
        
        while(i<A.size()){
            for(int j=i;j>=0;j--){
                for(int k=i;k>=0;k--){
                    if(A[j]==B[k]){
                        count++;
                    }
                }
            }
            C[i]=count;
            i++;
            count=0;
           
        }
        return C;
        
    }
};