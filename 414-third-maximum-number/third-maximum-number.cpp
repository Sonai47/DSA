class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long max = LLONG_MIN;
        long long secMax = LLONG_MIN;
        long long thirdMax = LLONG_MIN;
        int flag = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == max || nums[i] == secMax || nums[i] == thirdMax) {
                continue;
            }

            if (nums[i] > max) {
                thirdMax = secMax;
                secMax = max;
                max = nums[i];
            } else if (nums[i] > secMax) {
                thirdMax = secMax;
                secMax = nums[i];
            } else if (nums[i] > thirdMax) {
                thirdMax = nums[i];
            } else {
                continue;
            }
        }

        if (thirdMax == LLONG_MIN) {
            return max;
        }
        return thirdMax;
    }
};