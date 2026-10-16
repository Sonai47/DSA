class Solution {
public:
    bool isPowerOfThree(int n) {
        long val = 1;
        while (val <= n){
            if(n == val){
                return true;
            }
            val *= 3;
        }
        return 0;
    }
};