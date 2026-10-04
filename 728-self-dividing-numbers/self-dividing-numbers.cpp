class Solution {
public:
    bool isSelfDivide(int num){
        int cpNum = num;
        while (cpNum != 0){
            int digit = cpNum % 10;
            if(digit == 0){
                return false;
            }
            cpNum = cpNum / 10;
            if (num % digit == 0){
                continue;
            } else {
                return false;
            }
        }

        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans = {};
        for (int i = left; i<=right; i++){
            if(i % 10 == 0 && i >= 10){
                continue;
            }
            if(isSelfDivide(i)){
                ans.push_back(i);
            }
        }

        return ans;
    }
};