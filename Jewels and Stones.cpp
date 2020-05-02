class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count=0;
       map< const char,int > m;
        for(int i=0;i<J.length();i++)
        {
           // cout<<J[i]<<endl;
            m[J[i]]+=1;
        }
      
        for(int i=0;i<S.length();i++)
        {
            if(m.find(S[i])!=m.end())
                count++;
        }
        return count;
    }
};
