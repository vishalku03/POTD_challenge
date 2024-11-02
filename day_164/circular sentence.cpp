class Solution {
public:
    bool isCircularSentence(string sentence) {
        stringstream ss(sentence);
        string word;
        string first = "", last = "";
        char prev = '1'; // 1->signifies that prev is empty
        while(ss>>word){
            if(first.empty()) first = word;
            last = word;
            if(prev != '1' && prev != word[0]) return false;
            prev = word.back();
        }
        return first[0] == last.back();
    }
};

// leetcode - 2490