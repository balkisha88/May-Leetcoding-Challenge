class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<const char,int> m;
       
        for(int i=0;i<magazine.length();i++)
        {
            m[magazine[i]]+=1;
        }
        for(int i=0;i<ransomNote.length();i++) 
        {
           if(m.find(ransomNote[i])!=m.end() && m[ransomNote[i]]>0 )
           {
               m[ransomNote[i]]--;
               
           }
           else
                return false;
        }
        return true;
    }
};
