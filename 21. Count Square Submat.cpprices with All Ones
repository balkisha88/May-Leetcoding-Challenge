class Solution {
public:
   
    int countSquares(vector<vector<int>>& matrix) {
        
        int row=matrix.size();
        int cols=matrix[0].size();
        
       // vector<vector<int>> dp(5,5);
       // vector<vector<int>> dp(row,vector<int>(cols));
        int dp[row][cols];
        int sum=0;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(i==0||j==0)
                {
                    dp[i][j]=matrix[i][j];
                    sum+=dp[i][j];
                }
                else
                {
                    if(matrix[i][j]==1)
                    {
         dp[i][j]=min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]))+1;
                        sum+=dp[i][j];
                    }
                    else
                    {dp[i][j]=0;
                     sum+=dp[i][j];
                    }
                }
                
            }
        }
       
        return sum;
    }
};
