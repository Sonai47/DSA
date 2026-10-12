class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int> seq = {};
        for(int i = 0;i<nums.size();i++){
            seq[nums[i]] = 1;
        }
        for(int j = 1;j <= 2147483647;j++){
            if(seq.count(j)>0){
                continue;
            } else {
                return j;
            }
        }
        return 0;
    }
};