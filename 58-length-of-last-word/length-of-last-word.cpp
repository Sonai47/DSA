class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int n = s.length() - 1;

        while(s[n] == ' '){
            n--;
        }

        while(s[n] != ' '){
            count++;
            n--;
            if(n < 0){
                return count;
            }
        }

        return count;
    }
};