
#include <bits/stdc++.h>
using namespace std;

void occurrenceOfEachWord(const string& s) {
    unordered_map<string, int> mp;
    stringstream ss(s);
    string word;

    while (ss >> word) {
        mp[word]++;
    }

    for (const auto& it : mp) {
        cout << it.first << " " << it.second << endl;
    }
}


/*
   stringstream ss(s);: This converts the string s into a stream, making it easy to extract words separated by whitespace.
while (ss >> word): 
  This reads each word from ss and stores it in word. It stops when there are no more words.

*/

// coding ninjas