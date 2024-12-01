class Solution
{
public:
     // Function is to check whether two strings are anagram of each other or not.
     bool areAnagrams(string &s1, string &s2)
     {
          map<char, int> mp1;
          map<char, int> mp2;
          for (int i = 0; i < s1.length(); i++)
               mp1[s1[i]]++;
          for (int i = 0; i < s2.length(); i++)
               mp2[s2[i]]++;
          return mp1 == mp2;
     }
};

// gfg