class Solution {
public:
    int countSeniors(vector<string>& details) {
        
        int n =  details.size();
        int ans = 0;
        for(int j = 0;j<n;j++)
        {
            int age =  (details[j][11] - '0')*10+(details[j][12]-'0');
            if(age>60)
            ans++;
        }

        return ans;
    }
};

// lc -  2678