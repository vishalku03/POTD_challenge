class Solution {
public:
    int secondMinimum(int n, vector<vector<int>>& edges, int time, int change) {
     
        vector<vector<int>> adj(n);
        for (auto e : edges) {
            adj[e[0] - 1].push_back(e[1] - 1); 
            adj[e[1] - 1].push_back(e[0] - 1); 
        }

        vector<pair<int, int>> dist(n, {1e9, 1e9});
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
         dist[0] = {0, 1e9};
        pq.push({0, 0}); 
        while (!pq.empty()) {
            auto [currTime, node] = pq.top(); 
            pq.pop(); 
            if (currTime > dist[node].second) {
                continue;
            }

           
            int newTime = currTime + time;
         
            int temp = currTime / change;
            if (temp % 2 == 1) 
                newTime = (temp + 1) * change + time; 
            for (auto adjNode : adj[node]) {
                
                if (dist[adjNode].first > newTime) {
                    dist[adjNode].second = dist[adjNode].first; 
                    dist[adjNode].first = newTime; 
                    pq.push({dist[adjNode].first, adjNode}); 
                }
 
                else if (dist[adjNode].first == newTime) {
                    continue; // Skip processing
                }
                // If the new time is shorter than the second shortest known time to the neighbor
                else if (dist[adjNode].second > newTime) {
                    dist[adjNode].second = newTime; // Update second shortest time
                    pq.push({dist[adjNode].second, adjNode}); // Push the neighbor to pq
                }               
            }
        }
        // return second value of the last index
        return dist[n-1].second;
    }
};

// lc -  2045