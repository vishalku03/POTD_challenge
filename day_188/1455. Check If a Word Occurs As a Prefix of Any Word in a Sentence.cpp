#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int isPrefixOfWord(string sentence, string searchWord)
     {
          int i = 1, n = searchWord.size();
          stringstream ans(sentence);
          string word;
          while (ans >> word)
          {
               if (word.substr(0, n) == searchWord)
                    return i;
               i++;
          }
          return -1;
     }
};SEARC