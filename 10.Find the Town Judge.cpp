class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        
        unordered_map<int,int> m;
        
        for(int i=0;i<trust.size();i++)
        {
            m[trust[i][0]]--;
            m[trust[i][1]]++;
        }
        if(N==1)
            return 1;
        if(trust.size()==1)
            return trust[0][1];
        for(auto itr=m.begin();itr!=m.end();itr++)
        {
            if(itr->second==N-1)
                return itr->first;
                
        }
        return -1;
    }
};
