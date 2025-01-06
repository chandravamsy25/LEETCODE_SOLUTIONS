class Solution {
public:
    vector<int> minOperations(string boxes) {

        vector<int>values(boxes.size());
        int total_index=0;
        int number_of_ones=0;
        int prev_ones=0,prev_index=0;

        for(int i=0;i<boxes.size();i++){
            if(boxes[i]=='1') 
            {
                total_index+=i;
                number_of_ones++;
            }
        }
        cout<<total_index<<"hi"<<number_of_ones;

        for(int i=0;i<boxes.size();i++){
            if(boxes[i]=='0'){
                values[i]=(total_index-(i*number_of_ones))+abs((prev_ones*i)-prev_index);
            }
            else{
               values[i]= (total_index-i-(i)*(number_of_ones-1))+abs((prev_ones*i)-prev_index);
               number_of_ones--;
               total_index-=i;
               prev_index+=i;
               prev_ones++;
            }
        }
        return values;
        
    }
};