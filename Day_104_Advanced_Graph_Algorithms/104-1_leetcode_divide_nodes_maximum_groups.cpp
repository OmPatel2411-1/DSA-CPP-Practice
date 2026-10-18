class Solution {
public:
    int magnificentSets(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n + 1);

        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        vector<int> color(n + 1, -1);
        vector<vector<int>> components;

        for (int i = 1; i <= n; i++) {
            if (color[i] != -1) continue;

            vector<int> comp;
            queue<int> q;
            q.push(i);
            color[i] = 0;

            while (!q.empty()) {
                int u = q.front();
                q.pop();
                comp.push_back(u);

                for (int v : adj[u]) {
                    if (color[v] == -1) {
                        color[v] = 1 - color[u];
                        q.push(v);
                    } else if (color[v] == color[u]) {
                        return -1;
                    }
                }
            }

            components.push_back(comp);
        }

        auto bfs = [&](int src) {
            vector<int> dist(n + 1, -1);
            queue<int> q;

            q.push(src);
            dist[src] = 1;
            int levels = 1;

            while (!q.empty()) {
                int u = q.front();
                q.pop();

                for (int v : adj[u]) {
                    if (dist[v] == -1) {
                        dist[v] = dist[u] + 1;
                        levels = max(levels, dist[v]);
                        q.push(v);
                    }
                }
            }

            return levels;
        };

        int ans = 0;

        for (auto &comp : components) {
            int maxGroups = 0;

            for (int node : comp) {
                maxGroups = max(maxGroups, bfs(node));
            }

            ans += maxGroups;
        }

        return ans;
    }
};