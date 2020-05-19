class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        if(s1.size()>s2.size())
            return false;
        
        vector<int> s1hash(26,0);
        vector<int> s2hash(26,0);
        
        for(int i=0;i<s1.size();i++)
        {
            s1hash[s1[i]-'a']++;
            s2hash[s2[i]-'a']++;
        }
        if(s1hash==s2hash)
            return true;
        for(int i=s1.size();i<s2.size();i++)
        {
            s2hash[s2[i]-'a']++;
            s2hash[s2[i-s1.size()]-'a']--;
            if(s1hash==s2hash)
                return true;
        }
        return false;
    }
};
