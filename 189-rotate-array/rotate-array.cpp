class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        vector<int> temp = {};

        for(int i = n-1;i>=n-k;i--){
            temp.push_back(nums[i]);
        }

        for(int j = n-1;j-k>=0;j--){
            nums[j] = nums[j-k];
        }

        for(int l = 0;l<temp.size();l++){
            nums[k-1-l] = temp[l];
        }
    }
};