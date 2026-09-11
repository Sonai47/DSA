class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int size = digits.size();
    int num;
    std::vector<int> total_combo = {};

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (j == i)
            {
                continue;
            }
            for (int k = 0; k < size; ++k)
            {
                if (k == i || k == j)
                {
                    continue;
                }
                if (digits[i] == 0)
                {
                    continue;
                }
                if (digits[k] % 2 == 1)
                {
                    continue;
                }
                num = digits[i] * 100 + digits[j] * 10 + digits[k];
                if (std::find(total_combo.begin(), total_combo.end(), num) == total_combo.end())
                {
                    total_combo.push_back(num);
                }
                
            }
        }
    }

    return total_combo.size();


    }
};