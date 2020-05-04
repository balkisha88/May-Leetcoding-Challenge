class Solution {
public:
    int findComplement(int num) {
        
        int num_of_bit=floor(log2(num))+1;
        
         for(int i=0;i<num_of_bit;i++)
            num=num^(1<<i);
        return num;
    }
};
