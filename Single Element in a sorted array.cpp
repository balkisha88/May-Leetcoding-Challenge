class Solution {
public:
    int binary_search(vector<int>& nums,int low,int high)
    {
        if(low>high)
            return -1;
        if(low==high)
        {  
            return nums[low];
           
        }
            
        
        int mid=low+(high-low)/2;
        if(mid%2==0)
        {
          if(nums[mid]!=nums[mid+1])
          {
               binary_search(nums,low,mid-1);
          }
          else
               binary_search(nums,mid+1,high);
        }
        else
        {
            if(nums[mid]==nums[mid-1])
          {
               binary_search(nums,mid+1,high);
          }
            else
                binary_search(nums,low,mid-1);
        }    
    }
    
    int singleNonDuplicate(vector<int>& nums) {
        
        int low=1;
        int high=nums.size();    
        
        int val=binary_search(nums,low,high);
        return val;
        
    }
};
