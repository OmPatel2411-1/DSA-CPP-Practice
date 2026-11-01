class Solution {
public:
    unordered_set<long long> st;
    int ans = 0;
    int k;

    long long encode(int u, int v) {
        return (long long)u * 100000 + v;
    }

    int dfs(int node, int parent, vector<vector<int>>& adj) {

        int count = 0;

        for (int nei : adj[node]) {
            if (nei == parent) continue;

            if (st.count(encode(node, nei))) {
                count++;
            }

            count += dfs(nei, node, adj);
        }

        return count;
    }

    void reroot(int node, int parent, int correct, vector<vector<int>>& adj) {

        if (correct >= k) {
            ans++;
        }

        for (int nei : adj[node]) {
            if (nei == parent) continue;

            int next = correct;

            if (st.count(encode(node, nei))) {
                next--;
            }

            if (st.count(encode(nei, node))) {
                next++;
            }

            reroot(nei, node, next, adj);
        }
    }

    int rootCount(vector<vector<int>>& edges, vector<vector<int>>& guesses, int K) {

        k = K;
        ans = 0;
        st.clear();

        int n = edges.size() + 1;

        vector<vector<int>> adj(n);

        for (auto &e : edges) {
            int u = e[0], v = e[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        for (auto &g : guesses) {
            st.insert(encode(g[0], g[1]));
        }

        int correct = dfs(0, -1, adj);

        reroot(0, -1, correct, adj);

        return ans;
    }
};
