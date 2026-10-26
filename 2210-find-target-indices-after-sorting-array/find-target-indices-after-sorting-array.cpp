class Solution {
public:
    void merge(vector<int>& arr, int left, int mid, int right){
        int n1 = mid - left + 1;
        int n2 = right - mid;

        vector<int> L(n1), R(n2);

        for(int i = 0;i < n1;i++){
            L[i] = arr[left + i];
        }
        for(int j = 0;j < n2;j++){
            R[j] = arr[mid + 1 + j];
        }

        int i = 0;
        int j = 0;
        int k = left;

        while(i<n1 && j<n2){
            if(L[i]<=R[j]){
                arr[k] = L[i];
                i++;
            } else {
                arr[k] = R[j];
                j++;
            }
            k++;
        }
        while(i<n1){
            arr[k] = L[i];
            i++;
            k++;
        }
        while(j<n2){
            arr[k] = R[j];
            j++;
            k++;
        }
    }
    void mergeSort(vector<int>& arr, int left, int right){
        if(left < right){
            int mid = left + (right-left)/2;

            mergeSort(arr, left, mid);
            mergeSort(arr, mid+1, right);

            merge(arr, left, mid, right);
        }
    }
    vector<int> targetIndices(vector<int>& nums, int target) {
        mergeSort(nums, 0, nums.size()-1);
        vector<int> index = {};

        for(int i = 0;i<nums.size();i++){
            if(nums[i] == target){
                index.push_back(i);
            }
        }
        return index;
    }
};