class Solution {
public:
    
    bool dfs(vector<vector<int>>& m,int v,int grp,vector<int>& group)
    {
        if(group[v]==-1) group[v]=grp;
        else return group[v]==grp;
        
        for(int i=0;i<m[v].size();i++)
        {
            if(!dfs(m,m[v][i],1-grp,group))
                return false;
        }
        return true;
    }
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        
        vector<vector<int>> m(N,vector<int>());
        for(int i=0;i<dislikes.size();i++)
        {
            m[dislikes[i][0]-1].push_back(dislikes[i][1]-1);
            m[dislikes[i][1]-1].push_back(dislikes[i][0]-1);
        
        }
        
        vector<int> group(N,-1);
       
        
        for(int i=0;i<N;i++)
        {
            if(group[i]==-1 && !dfs(m , i, 0, group))
                return false;
        }
       
        
        
        return true;
    }
};
