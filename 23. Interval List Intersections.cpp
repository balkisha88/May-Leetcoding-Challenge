class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        
        int i=0,j=0;
        vector<vector<int>> ans;
        while(i<A.size() && j<B.size())
        {
            int low=max(A[i][0],B[j][0]);
            int high=min(A[i][1],B[j][1]);
            if(low<=high) 
                ans.push_back({low,high}); //same use {} as we use in pair vector
            
            if(A[i][1]>B[j][1]) j++;
            else i++;
        }
        return ans;
    }
};
