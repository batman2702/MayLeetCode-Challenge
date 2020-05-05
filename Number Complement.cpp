class Solution {
public:
    int findComplement(int num) {
        int n=floor(log2(num))+1;
        unsigned mask=(1<<n);
        //cout<<mask;
        return mask-num-1;
        
    }
};
