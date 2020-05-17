bool isPerfectSquare(int num) {
        if(num==1)
            return true;
        int left=1;
        int n=num;
        while(left<=n)
        {
            long long int mid=left+(n-left)/2;
            
            if(mid*mid==num)
                return true;
            else
            {
                if(mid*mid>num)
                    n=mid-1;
                else
                    left=mid+1;
            }
                
        }
        return false;
    }
