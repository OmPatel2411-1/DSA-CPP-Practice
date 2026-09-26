class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        int n = graph.size();
        
        vector<vector<bool>> visited(n, vector<bool>(1 << n, false));
        
        queue<pair<int, int>> q;
        
        for (int i = 0; i < n; i++) {
            int mask = 1 << i;
            q.push({i, mask});
            visited[i][mask] = true;
        }
        
        int steps = 0;
        
        while (!q.empty()) {
            int sz = q.size();
            
            while (sz--) {
                auto [node, mask] = q.front();
                q.pop();
                
                if (mask == (1 << n) - 1)
                    return steps;
                
                for (int next : graph[node]) {
                    int newMask = mask | (1 << next);
                    
                    if (!visited[next][newMask]) {
                        visited[next][newMask] = true;
                        q.push({next, newMask});
                    }
                }
            }
            
            steps++;
        }
        
        return -1;
    }
};
