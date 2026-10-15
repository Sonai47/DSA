class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        int curr = 0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
                
            }else{
                nums[curr] = nums[i];
                curr++;
            }
        }

        for(int j=curr;j<nums.size();j++){
            nums[j] = 0;
        }
    }
};