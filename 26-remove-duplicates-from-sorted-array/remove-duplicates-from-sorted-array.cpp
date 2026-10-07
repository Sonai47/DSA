class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> tempnum = {};
        map<int,int> temp = {};
        for(int i=0;i<nums.size();i++){
            if(temp.count(nums[i])){
                temp[nums[i]] += 1;
            } else {
                temp[nums[i]] = 1; 
                tempnum.push_back(nums[i]);              
            }
        }
        nums = tempnum;
        return temp.size();
    }
};