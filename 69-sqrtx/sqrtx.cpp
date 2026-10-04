class Solution {
public:
    int mySqrt(int x) {
        for (long i=0;i<= x/2;i++){
            if (i*i == x){
                return i;
            } else if ((i+1)*(i+1) > x && i*i < x){
                return i;
            } else {
                continue;
            }
        }
        return 1;
    }
};