class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            nums[i]=nums[i]*nums[i];
        }

        int n=nums.size();

        for (int i=n-1;i>=0;i--){
            for(int j=0;j<=i-1;j++){
                if(nums[j]>nums[j+1]){
                    int temp = nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
                }
            }
        }

        return nums;
    }
};