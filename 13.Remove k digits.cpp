class Solution {
public:
    string removeKdigits(string num, int k) {
        int i=0;
        if(num.size()==k)
            return "0";
        
        
        while(num.size() && k )
        {
            i=0;
            while(i<num.size()-1 && num[i]<=num[i+1])
            {  
                i++;   
            }
            
            num.erase(num.begin()+i);
            k--;
            while(num.size() && num[0]=='0')
                num.erase(num.begin());
        }
        
       if(num.size()==0)
           return "0";
        return num;
    }
};
