class Solution {
public:
    bool check(vector<vector<int>>& m,vector<int> &group,int v)
    {
        
            if(group[v]==0 ) return false;
            group[v]=0;
           
            for(int j=0;j<m[v].size();j++)
            {
               if(!check(m,group,m[v][j])) return false;
            }
            
            group[v]=2; //its completed
            return true;
        }
        
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
         vector<vector<int>> m(numCourses,vector<int>());
        for(int i=0;i<prerequisites.size();i++)
        {
            m[prerequisites[i][0]].push_back(prerequisites[i][1]);
            
        
        }
        
        vector<int> group(numCourses,-1);
        for(int i=0;i<numCourses;i++)
        {
            if(group[i]==-1 && !check(m,group,i)) return false;
        }
       
        return true;
        
        
        
    }

};
