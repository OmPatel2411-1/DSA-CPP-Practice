class Solution {
public:
    vector<vector<int>> adj;
    vector<int> bobTime;
    int ans = INT_MIN;

    bool dfsBob(int node, int parent, int time) {
        if (node == 0) {
            bobTime[node] = time;
            return true;
        }

        for (int nei : adj[node]) {
            if (nei == parent) continue;

            if (dfsBob(nei, node, time + 1)) {
                bobTime[node] = time;
                return true;
            }
        }

        return false;
    }

    void dfsAlice(int node, int parent, int time,
                  int profit, vector<int>& amount) {

        if (time < bobTime[node]) {
            profit += amount[node];
        }
        else if (time == bobTime[node]) {
            profit += amount[node] / 2;
        }

        if (node != 0 && adj[node].size() == 1) {
            ans = max(ans, profit);
            return;
        }

        for (int nei : adj[node]) {
            if (nei != parent) {
                dfsAlice(nei, node, time + 1,
                         profit, amount);
            }
        }
    }

    int mostProfitablePath(vector<vector<int>>& edges, int bob, vector<int>& amount) {

        int n = amount.size();

        adj.resize(n);
        bobTime.assign(n, INT_MAX);

        for (auto& e : edges) {
            int u = e[0];
            int v = e[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        dfsBob(bob, -1, 0);

        dfsAlice(0, -1, 0, 0, amount);

        return ans;
    }
};
