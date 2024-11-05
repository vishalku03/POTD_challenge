vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
        vector<int> ans;
        unordered_set<int> s1(a.begin(), a.end()), s2(b.begin(), b.end());
        
        for(auto i: s2) {
            if(s1.find(i) == s1.end()) s1.insert(i);
        }
        
        for(auto i: s1) {
            ans.push_back(i);
        }
        sort(ans.begin(), ans.end());
        return ans;
        
    }

    // gfg