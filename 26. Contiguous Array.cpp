class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int maxlength=0;
        int sum=0;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                nums[i]=-1;
            sum+=nums[i];
            if(sum==0)
            {
               
                maxlength=i+1;
            }
            if(m.find(sum)!=m.end())
              maxlength=i-m[sum]>=maxlength?i-m[sum]:maxlength;
            else m[sum]=i;  
            
            
        }
        
        return maxlength;
        
    }
};
