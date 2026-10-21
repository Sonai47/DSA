class Solution {
public:
    int xorOfString(string s){
        int value = 0;
        for(char x:s){
            value ^= int(x);
        }
        return value;
    }
    char findTheDifference(string s, string t) {
        int tNum = xorOfString(t);
        int sNum = xorOfString(s);

        return char(sNum^tNum);
    }
};