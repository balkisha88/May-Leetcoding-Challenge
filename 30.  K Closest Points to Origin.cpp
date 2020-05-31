class Solution {
public:
    struct Compare
    {
        bool operator()(vector<int> &a,vector<int> &b)
        { return a[1]*a[1]+a[0]*a[0]< b[1]*b[1]+b[0]*b[0];}
        
    };
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        
        if(K==points.size()) return points;
        sort(points.begin(),points.end(),Compare());
        
        
        return  vector<vector<int>>(points.begin(),points.begin()+K);
    }
};
