class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations,
                    vector<int>& time) {
        vector<vector<int>> adj(n + 1);
        vector<int> indegree(n + 1, 0);
        vector<int> finish(n + 1, 0);

        for (auto &r : relations) {
            int u = r[0];
            int v = r[1];

            adj[u].push_back(v);
            indegree[v]++;
        }

        queue<int> q;

        for (int i = 1; i <= n; i++) {
            finish[i] = time[i - 1];

            if (indegree[i] == 0) {
                q.push(i);
            }
        }

        int ans = 0;

        while (!q.empty()) {
            int u = q.front();
            q.pop();

            ans = max(ans, finish[u]);

            for (int v : adj[u]) {
                finish[v] = max(finish[v],
                                finish[u] + time[v - 1]);

                indegree[v]--;

                if (indegree[v] == 0) {
                    q.push(v);
                }
            }
        }

        return ans;
    }
};
