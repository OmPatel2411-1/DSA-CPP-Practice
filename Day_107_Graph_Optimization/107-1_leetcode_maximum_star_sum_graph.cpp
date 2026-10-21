class Solution {
public:
    int maxStarSum(vector<int>& vals, vector<vector<int>>& edges, int k) {
        int n = vals.size();
        vector<vector<int>> adj(n);

        for (auto& e : edges) {
            int u = e[0], v = e[1];
            adj[u].push_back(vals[v]);
            adj[v].push_back(vals[u]);
        }

        int ans = INT_MIN;

        for (int i = 0; i < n; i++) {
            sort(adj[i].begin(), adj[i].end(), greater<int>());

            int sum = vals[i];

            for (int j = 0; j < min(k, (int)adj[i].size()); j++) {
                if (adj[i][j] <= 0) break;
                sum += adj[i][j];
            }

            ans = max(ans, sum);
        }

        return ans;
    }
};
