class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        if(s.length()==0)
            return result ;
        
        unordered_map<char,int> m;
        for(int i=0;i<p.length();i++)
            m[p[i]]++;
        int left=0,right=0,count=0;
        
        
        while(right<s.length())
        {
            if(m.find(s[right])!=m.end() && m[s[right]]>=1)
            {
                m[s[right]]--;
                count++;
            
                
            
                right++;
                if(count==p.length())
                {
                    result.push_back(left);

                }
            }
            else
            {
               if(m.find(s[left])!=m.end())
                    { 
                    m[s[left]]++;
                    count--;
               } 
                
                if(left<right)
                    left++;
                else
                {right++;
                 left=right;}
                
            }
            
            
        }
        return result;
    }
};
