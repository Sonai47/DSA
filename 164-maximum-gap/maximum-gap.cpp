class Solution {
public:
    void bucketSort(vector<int>& arr) {
        if (arr.empty())
            return;

        int n = arr.size();

        int minVal = *min_element(arr.begin(), arr.end());
        int maxVal = *max_element(arr.begin(), arr.end());

        if (minVal == maxVal)
            return;

        vector<vector<int>> buckets(n);

        for (int x : arr) {
            int index = (long long)(x - (long long)minVal) * n /
                        ((long long)maxVal - minVal + 1);

            buckets[index].push_back(x);
        }

        for (auto& bucket : buckets) {
            sort(bucket.begin(), bucket.end());
        }

        int k = 0;
        for (auto& bucket : buckets) {
            for (int x : bucket) {
                arr[k++] = x;
            }
        }
    }
    int maximumGap(vector<int>& nums) {
        int maxGap = 0;
        if (nums.size() < 2) {
            return 0;
        } else {
            bucketSort(nums);

            for (int i = 1; i <= nums.size() - 1; i++) {
                int nGap = nums[i] - nums[i-1];
                if (maxGap < nGap) {
                    maxGap = nGap;
                }
            }
        }
        return maxGap;
    }
};