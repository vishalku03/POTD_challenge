class Solution {
public:
    long long minimumTotalDistance(vector<int>& robots, vector<vector<int>>& factories) {
        sort(robots.begin(), robots.end());
        sort(factories.begin(), factories.end());
        int robotCount = robots.size(), factoryCount = factories.size();
        vector<vector<long long>> dp(robotCount + 1, vector<long long>(factoryCount + 1));
        for (int i = 0; i < robotCount; i++) {
            dp[i][factoryCount] = LLONG_MAX;
        }
        for (int j = factoryCount - 1; j >= 0; j--) {
            long long totalDistance = 0; 
            deque<pair<int, long long>> distanceDeque; 
            distanceDeque.push_back({robotCount, 0}); 
            for (int i = robotCount - 1; i >= 0; i--) {
                totalDistance += abs(robots[i] - factories[j][0]);
                while (!distanceDeque.empty() && distanceDeque.front().first > i + factories[j][1]) {
                    distanceDeque.pop_front();
                }
                while (!distanceDeque.empty() && distanceDeque.back().second >= dp[i][j + 1] - totalDistance) {
                    distanceDeque.pop_back();
                }
                distanceDeque.push_back({i, dp[i][j + 1] - totalDistance});
                dp[i][j] = distanceDeque.front().second + totalDistance;
            }
        }
        return dp[0][0];
    }
};


// leetcode - 2463