class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int insert=0;
        for (int i=0;i<n;i++){
            // nums2[i]
            for (int j=0;j<m+n;j++){
                // nums1[j]
                if (j==0 && nums2[i]<=nums1[j]){
                    // add element in front
                    nums1.emplace(nums1.begin(),nums2[i]);
                    insert++;
                    break;
                }
                if (nums2[i]<=nums1[j] && nums2[i]>nums1[j-1]){
                    // insert at j index
                    nums1.emplace(nums1.begin()+j,nums2[i]);
                    insert++;
                    break;
                }
                if (nums1[j]==0 && j>=m+insert){
                    nums1.emplace(nums1.begin()+j,nums2[i]);
                    insert++;
                    break;
                }
            }
        }
        for (int k=nums1.size();k>m+n;k--){
            nums1.pop_back();
        }
    }
};