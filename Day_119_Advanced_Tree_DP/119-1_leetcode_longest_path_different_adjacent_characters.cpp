class Solution {
public:
    int ans = 1;

    int dfs(int node, int parent, vector<vector<int>>& adj, string& s) {
        int longest = 0, secondLongest = 0;

        for (int child : adj[node]) {
            if (child == parent) continue;

            int len = dfs(child, node, adj, s);

            if (s[child] == s[node]) continue;

            if (len > longest) {
                secondLongest = longest;
                longest = len;
            } 
            else if (len > secondLongest) {
                secondLongest = len;
            }
        }

        ans = max(ans, 1 + longest + secondLongest);

        return 1 + longest;
    }

    int longestPath(vector<int>& parent, string s) {
        int n = parent.size();

        vector<vector<int>> adj(n);

        for (int i = 1; i < n; i++) {
            adj[parent[i]].push_back(i);
            adj[i].push_back(parent[i]);
        }

        dfs(0, -1, adj, s);

        return ans;
    }
};
