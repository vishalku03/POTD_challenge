#include <iostream>
#include <string>
using namespace std;

string getCompressedString(string &input) {
    string ans = "";
    int cnt = 1;

    for (int i = 0; i < input.size() - 1; i++) {
        if (input[i] != input[i + 1]) {
            // If count is greater than 1, add the count after the character
            if (cnt > 1) {
                ans += input[i] + to_string(cnt);
            } else {
                ans += input[i];
            }
            cnt = 1; // Reset count
        } else {
            cnt++;
        }
    }

    // Handle the last character
    if (cnt > 1) {
        ans += input[input.size() - 1] + to_string(cnt);
    } else {
        ans += input[input.size() - 1];
    }

    return ans;
}

int main() {
    // Test cases
    string input1 = "aaabbccdsa";
    string input2 = "aaabbcddeeeee";

    cout << "Compressed Output 1: " << getCompressedString(input1) << endl;
    cout << "Compressed Output 2: " << getCompressedString(input2) << endl;

    return 0;
}


// coding ninjs