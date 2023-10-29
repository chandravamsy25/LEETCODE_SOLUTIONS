class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int k = (minutesToTest/minutesToDie) + 1;
        int l = k;
        int count = 1;
        if(buckets==1){
            return 0;
        }
        
        while(k<buckets){
            
            k = k * l;
            count++;
            
        }
        return count;

       
        
    }
};