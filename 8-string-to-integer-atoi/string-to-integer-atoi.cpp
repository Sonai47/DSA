class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        long long ans = 0;

        // 1. Skip leading spaces
        while (i < s.length() && s[i] == ' ') {
            i++;
        }

        // 2. Handle sign
        if (i < s.length() && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') {
                sign = -1;
            }
            i++;
        }

        // 3. Read digits
        while (i < s.length() && s[i] >= '0' && s[i] <= '9') {

            int digit = s[i] - '0';

            // 4. Check overflow BEFORE multiplication
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

        // 5. Apply sign
        ans *= sign;

        return (int)ans;
    }
};