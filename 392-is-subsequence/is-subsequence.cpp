class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n1 = s.length();
        int n2 = t.length();
        
        int i = 0;
        int j = 0;

        int flag = 0;

        
            while(j<n2){
                if(s[i] == t[j]){
                    i++;
                    flag++;
                }               
                j++;
            }
            if (flag<n1){
                return false;
            }
    
        return true;
    }
};