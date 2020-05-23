class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char,int> m;
        vector<char> v;
        for(char c:s)
        { 
            m[c]+=1;
            if(m[c]==1) v.push_back(c);
            
        }
        
        vector<pair<int,char>> vp;
        
        for(char c:v)
        {
            vp.push_back({m[c],c});  //{}to ush values in pair
        }
        sort(vp.begin(),vp.end()); //it sort in increasing order , first sort by first value and than second value
        
        string ans="";
        for(int i=vp.size()-1;i>=0;i--)
        {
            int times=vp[i].first;
            while(times-->0)
                ans+=vp[i].second;
        }
         return ans;
        
    }
};
