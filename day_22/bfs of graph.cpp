class Solution
{
public:
     // Function to return Breadth First Traversal of given graph.
     vector<int> bfsOfGraph(int V, vector<int> adj[])
     {
          queue<int> q;               // Declaring a queue
          vector<int> ans;            // Answer vector
          vector<bool> visited(V, 0); // visited vector to keep track of visited nodes
          int node;

          // Initializing queue with a start node
          q.push(0);
          visited[0] = 1;

          while (!q.empty())
          {
               node = q.front();
               q.pop();
               ans.push_back(node);

               // Pushing all unvisited adjacent nodes of 'node'
               for (int j = 0; j < adj[node].size(); j++)
               {
                    if (!visited[adj[node][j]])
                    {
                         visited[adj[node][j]] = 1;
                         q.push(adj[node][j]);
                    }
               }
          }
          return ans;
     }
};

// gfg