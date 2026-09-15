class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        vector<char> ans={};
        for (string s:strs){
            if (s == ""){
                return "";
            } else if (ans.empty()){
                for (int i=0;i<s.length();i++){
                    ans.push_back(s[i]);
                }
            } else {
                int i = 0;

                while (i < s.length() && i < ans.size() && s[i] == ans[i]) {
                    i++;
                }

                ans.resize(i);
                if (ans.empty()){
                    return "";
                }
            }
        }
        string str(ans.begin(),ans.end());
        return str;
    }
};