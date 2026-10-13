class Solution {
public:
    vector<int> ans, subtree;
    int n;

    void dfs1(int node, int parent, vector<vector<int>>& adj) {
        subtree[node] = 1;

        for (int child : adj[node]) {
            if (child == parent) continue;

            dfs1(child, node, adj);

            subtree[node] += subtree[child];
            ans[node] += ans[child] + subtree[child];
        }
    }

    void dfs2(int node, int parent, vector<vector<int>>& adj) {
        for (int child : adj[node]) {
            if (child == parent) continue;

            ans[child] = ans[node] - subtree[child]
                       + (n - subtree[child]);

            dfs2(child, node, adj);
        }
    }

    vector<int> sumOfDistancesInTree(
        int N, vector<vector<int>>& edges
    ) {
        n = N;
        ans.assign(n, 0);
        subtree.assign(n, 0);

        vector<vector<int>> adj(n);

        for (auto& edge : edges) {
            int u = edge[0], v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        dfs1(0, -1, adj);
        dfs2(0, -1, adj);

        return ans;
    }
};