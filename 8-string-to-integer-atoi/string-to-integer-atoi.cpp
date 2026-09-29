class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        long long ans = 0;

        while (i < s.length() && s[i] == ' ') {
            i++;
        }

        if (i < s.length() && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') {
                sign = -1;
            }
            i++;
        }

        while (i < s.length() && s[i] >= '0' && s[i] <= '9') {

            int digit = s[i] - '0';

            if (ans > (2147483647LL - digit) / 10) {
                if (sign == 1) {
                    return 2147483647;
                } else {
                    return -2147483648LL;
                }
            }

            ans = ans * 10 + digit;
            i++;
        }

        ans *= sign;

        return (int)ans;
    }
};