// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1;
        int high = n;

        while(low <= high){
            if(isBadVersion(low)){
                return low;
            }

            int mid =low + (high - low) / 2;

            if(isBadVersion(mid)){
                if(isBadVersion(mid-1)){
                    high = mid-1;
                }else{
                    return mid;
                }
            }else{
                if(isBadVersion(mid+1)){
                    return mid+1;
                }else{
                    low = mid+1;
                }
            }
        }
        return 0;
    }
};