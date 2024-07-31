class Solution {
public:
    int minimumDeletions(string s) {
        int n =  s.length();
        stack<char> ans;
        int count = 0;
        ans.push(s[0]);

        for(int i = 1;i<n;i++)
        {
            if(!ans.empty() && (ans.top() == 'b' && s[i]=='a'))
            {
                ans.pop();
                count =  count+1;
            }
            else
            ans.push(s[i]);
        }

        return count;
    }
};

// lc =  1653