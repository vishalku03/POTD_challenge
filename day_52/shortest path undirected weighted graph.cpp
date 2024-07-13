class Solution {
  public:
    void dijastra(int src, vector<int>& distance, vector<int>& predecessor, vector<vector<pair<int, int>>>& adj) {
        distance[src] = 0;
        set<pair<int, int>> s;
        s.insert({0, src});
        
        while (!s.empty()) 
        {
            auto it = s.begin();
            int node = it->second;
            int distancetillnow = it->first;
            s.erase(it);
            
            for (auto& nbrpair : adj[node]) 
            {
                int nbr = nbrpair.first;
                int currentdistance = nbrpair.second;
                
                if (distancetillnow + currentdistance < distance[nbr]) 
                {
                    auto f = s.find({distance[nbr], nbr});
                    if (f != s.end()) 
                    {
                        s.erase(f);
                    }
                    distance[nbr] = distancetillnow + currentdistance;
                    predecessor[nbr] = node;
                    s.insert({distance[nbr], nbr});
                }
            }
        }
    }

    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) 
    {
        // Creating adjacency list
        vector<vector<pair<int, int>>> adj(n + 1);
        for (int i = 0; i < m; ++i) {
            int u = edges[i][0], v = edges[i][1], w = edges[i][2];
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});  // Undirected graph
        }

        vector<int> distance(n + 1, INT_MAX);
        vector<int> predecessor(n + 1, -1);

        // Call Dijkstra's algorithm
       dijastra(1, distance, predecessor, adj);

        // If no path exists from 1 to n
        if (distance[n] == INT_MAX) 
        {
            return {-1};
        }

        // Reconstruct the path from 1 to n
        vector<int> path;
        for (int at = n; at != -1; at = predecessor[at]) 
        {
            path.push_back(at);
        }
        reverse(path.begin(), path.end());

        // Insert the total weight at the beginning of the path
        path.insert(path.begin(), distance[n]);

        return path;
    }
};




//   gfg