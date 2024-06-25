class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
       
        int row=matrix.size();
        int column=matrix[0].size();
        int colo=1;
        

        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    if(j!=0){
                        matrix[0][j]=0;
                    }
                    else
                        colo=0;
                    
                }

            }
        }

        for(int i=1;i<row;i++){
            for(int j=1;j<column;j++){
                if(matrix[i][j]!=0){
                    if(matrix[i][0]==0 || matrix[0][j]==0)
                    {
                        matrix[i][j]=0;
                    }
                }
            }
        }

        if(matrix[0][0]==0){
            for(int j=0;j<column;j++){
                matrix[0][j]=0;
            } 
        }
        if(colo ==0){
            for(int i=0;i<row;i++){
                matrix[i][0]=0;
            } 
        }
        
    }
};