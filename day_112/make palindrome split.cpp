#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<string> data(t);
    cin.ignore();              // ->  it include spacces and tab
     
    for (int i = 0; i < t; ++i) {
        getline(cin, data[i]);
    }

    for (int i = 0; i < t; ++i) {
        string s = data[i];
        unordered_map<char, int>mp;

        // Calculate frequency of each character
        for (char ch : s) {
            mp[ch]++;
        }

        int count = 0;
        // Calculate the maximum number of palindromic subsequences
        for (auto& j : mp) {
            if (j.second >= 2) {
                count += j.second / 2;
            }
        }
        cout << count << endl;
    }

    return 0;
}

// hacker earth


/*
   1. 



*/