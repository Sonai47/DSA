class Solution {
public:
    bool isPowerOfThree(int n) {
        // int val = 1;
        if(n<=0){
            return false;
        } else if(n==1){
            return true;
        }else{
            while(n%3 == 0){
                n /= 3;
            }
            if(n == 1){
                return true;
            }
        }
        return 0;
    }
};