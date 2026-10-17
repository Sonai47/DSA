class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> table = {};
        
        for(int x:nums){
            if(x % 2 != 0){
                continue;
            }
            table[x]++;
        }

        int max = 0;
        int ele = 0;
        if(table.empty()){
            return -1;
        } else {
            for(auto y:table){
                if(y.second > max){
                    max = y.second;
                    ele = y.first;
                }
            }
        }
        return ele;
    }
};