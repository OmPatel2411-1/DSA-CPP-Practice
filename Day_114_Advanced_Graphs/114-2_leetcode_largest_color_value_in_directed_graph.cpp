class Solution {
public:
    int largestPathValue(string colors, vector<vector<int>>& edges) {
        int n = colors.size();

        vector<vector<int>> adj(n);
        vector<int> indegree(n, 0);

        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            indegree[e[1]]++;
        }

        vector<array<int, 26>> dp(n);
        for (auto &row : dp) {
            row.fill(0);
        }

        queue<int> q;

        for (int i = 0; i < n; i++) {
            if (indegree[i] == 0) {
                q.push(i);
                dp[i][colors[i] - 'a'] = 1;
            }
        }

        int processed = 0;
        int ans = 0;

        while (!q.empty()) {
            int u = q.front();
            q.pop();

            processed++;

            for (int c = 0; c < 26; c++) {
                ans = max(ans, dp[u][c]);
            }

            for (int v : adj[u]) {
                for (int c = 0; c < 26; c++) {
                    dp[v][c] = max(
                        dp[v][c],
                        dp[u][c] + (colors[v] - 'a' == c)
                    );
                }

                indegree[v]--;

                if (indegree[v] == 0) {
                    q.push(v);
                }
            }
        }

        return processed == n ? ans : -1;
    }
};
