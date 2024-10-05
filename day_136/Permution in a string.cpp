class Solution {
public:

    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        vector<int> cache1(26, 0), cache2(26, 0);

        for (int i = 0; i < s1.size(); ++i) {
            cache1[s1[i] - 'a']++;
            cache2[s2[i] - 'a']++;
        }

        auto checkCache = [&]() {
            return cache1 == cache2;
        };

        if (checkCache()) return true;

        for (int i = s1.size(); i < s2.size(); ++i) {
            
            cache2[s2[i - s1.size()] - 'a']--;
            cache2[s2[i] - 'a']++;
            if (checkCache()) return true;
        }

        return false;
    }
};

// leetcode -  567