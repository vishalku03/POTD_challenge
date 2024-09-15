//Approach-2 (using Mask and Xor property)
class Solution {
public:
    int findTheLongestSubstring(string s) {
        unordered_map<int, int> mp;
        mp[0] = -1;
        int mask = 0;
        int maxL = 0;
        for(int i = 0; i<s.length(); i++) {
            int val = 0;
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                val = s[i]; //agar vowel hai to uski value lelo else consonant me 0 rahegi val
            
            mask = mask^val; //xor nikala
            
            if(!mp.count(mask)) //agar past me nahi dekha to map me daaldo
                mp[mask] = i;
            
            maxL = max(maxL, i - mp[mask]); //maxL nikaal lo
        }
        return maxL;
    }
};

// leetcode -  1371bina


