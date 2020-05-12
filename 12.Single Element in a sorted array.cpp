class Solution {
public:
    int binary_search(vector<int>& nums,int low,int high)
    {
       int ans;
            
        while(low<=high)
        {
             if(low==high)
            {  
                ans= nums[low];
                 break;

            }
            int mid=low+(high-low)/2;
             if(mid%2==0)
            {
                if(nums[mid]!=nums[mid+1])
                  high=mid;  
                else
                   low=mid+2;
            }
            else
            {
                if(nums[mid]==nums[mid-1])
                  low=mid+1;
                else
                  high=mid-1;
            }
        }
        
       
        
       return ans;
    }
    
    int singleNonDuplicate(vector<int>& nums) {
        
        int low=0;
        int high=nums.size()-1;    
        
        int val=binary_search(nums,low,high);
        return val;
        
    }
};
