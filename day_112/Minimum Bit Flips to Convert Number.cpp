// class Solution {
// public:
//     int minBitFlips(int start, int goal) {
        
//         int x=  start^goal;
//         return __builtin_popcount(x);
//     }
// };

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xor_value = start ^ goal;
        int res = 0;
        while (xor_value > 0) {
            res += xor_value & 1; 
            xor_value >>= 1;        
        }
        
        return res;
    }
};

// leetcode - 2220