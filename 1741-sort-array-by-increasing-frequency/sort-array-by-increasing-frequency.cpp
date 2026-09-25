class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int> table;

        for (int num : nums) {
            table[num]++;
        }
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (table[a] != table[b]) {
                return table[a] < table[b];
            }
            return a > b;
        });
        return nums;
    }
};