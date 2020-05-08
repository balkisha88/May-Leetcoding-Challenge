class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
        if(coordinates.size()==1)
            return true;
        for (int i=2;i<coordinates.size();i++)
        {
            int y3=coordinates[i][1];
            int y2=coordinates[i-1][1];
            int y1=coordinates[i-2][1];
            int x3=coordinates[i][0];
            int x2=coordinates[i-1][0];
            int x1=coordinates[i-2][0];
            
          
            
            if((y2-y1)*(x3-x1)!=(y3-y1)*(x2-x1))
                return false;
           
        }
        return true;
    }
};
