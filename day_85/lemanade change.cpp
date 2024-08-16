class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int count_5 = 0, count_10 = 0;
        for (auto bill : bills) {
            if (bill == 5)
                count_5++;
            else if (bill == 10 && count_5 >= 1) {
                count_10++;
                count_5--;
            } else if (bill == 20 && count_10 >= 1 && count_5 >= 1) {
                count_10--;
                count_5--;
            } else if (bill == 20 && count_5 >= 3) {
                count_5 -= 3;
            } else
                return false;
        }
        return true;
    }
};

// leetcode -  860