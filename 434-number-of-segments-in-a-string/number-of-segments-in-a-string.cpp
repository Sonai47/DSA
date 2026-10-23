class Solution {
public:
    int countSegments(string s) {
        int segment = 0;
        int flag = 0;
        for(char x:s){
            if(x != ' ' && flag == 0){
                segment++;
                flag = 1;
            }
            if(x == ' '){                
                flag = 0;
            }
        }
        return segment;
    }
};