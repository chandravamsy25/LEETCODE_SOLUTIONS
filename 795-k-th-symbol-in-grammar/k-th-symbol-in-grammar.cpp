class Solution {
public:
    int kthGrammar(int n, int k) {
        int p = pow(2,n-2);
        if(n==1&&k==1){
            return 0;
        }
        if(k>p){
            return !kthGrammar(n-1,k-p);
        }
        else {
            return kthGrammar(n-1,k);
        }
        
    }
};