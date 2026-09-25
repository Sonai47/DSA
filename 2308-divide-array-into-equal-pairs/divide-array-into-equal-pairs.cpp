class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int, int> table;

        for (int num : nums) {
            table[num]++;
        }

        for (auto& p : table) {
            if (p.second % 2 == 0) {
                continue;
            } else {
                return false;
            }
        }
        return true;
    }
};
