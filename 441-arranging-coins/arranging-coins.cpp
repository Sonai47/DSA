class Solution {
public:
    int arrangeCoins(int n) {
        if(n == 1){
            return 1;
        }
        long i;
        for(i = 1;i<n;i++){
            long val = i*(i+1)/2;
            if(n < val){
                break;
            }
        }
        return i-1;
    }
};