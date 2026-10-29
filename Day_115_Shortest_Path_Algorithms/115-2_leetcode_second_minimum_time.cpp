class Solution {
public:
    int secondMinimum(int n, vector<vector<int>>& edges,
                      int time, int change) {
        vector<vector<int>> adj(n + 1);

        for (auto& e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        vector<int> dist1(n + 1, INT_MAX);
        vector<int> dist2(n + 1, INT_MAX);

        queue<pair<int, int>> q;
        q.push({1, 0});
        dist1[1] = 0;

        while (!q.empty()) {
            auto [u, t] = q.front();
            q.pop();

            if (u == n && t == dist2[n]) {
                return t;
            }

            int nextTime = t;

            if ((nextTime / change) % 2 == 1) {
                nextTime = ((nextTime / change) + 1) * change;
            }

            nextTime += time;

            for (int v : adj[u]) {
                if (nextTime < dist1[v]) {
                    dist2[v] = dist1[v];
                    dist1[v] = nextTime;
                    q.push({v, nextTime});
                } else if (nextTime > dist1[v] &&
                           nextTime < dist2[v]) {
                    dist2[v] = nextTime;
                    q.push({v, nextTime});
                }
            }
        }

        return -1;
    }
};
