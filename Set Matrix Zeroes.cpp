# Brute Force Solution 
Time Complexity - O((N*M) * (N+M))
Space Complexity - O(1)
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
         for(int i=0;i<row;i++)
         {
             for(int j=0;j<col;j++)
             {
                 if(matrix[i][j]==0)
                 {
                     // col will be constant - for making respective col zero
                     for(int k=0;k<row;k++)
                     {
                         if(matrix[k][j]!=0)
                         {
                           // if input > 0 then -1 can be taken
                            matrix[k][j]=-999999;
                         }
                     } 
                    // row will be constant - for making respective row zero
                     for(int k=0;k<col;k++)
                     {
                         if(matrix[i][k]!=0)
                         {
                           // if input > 0 then -1 can be taken
                            matrix[i][k]=-999999;
                         }
                     } 
                     
                 }
             }
         }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]==-999999)
                {
                    matrix[i][j]=0;
                }
            }
        }
        
    }
};
