class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int missingNum = 0;
        for(int x:nums){
            missingNum ^= x; 
        }
        return missingNum;
    }
};