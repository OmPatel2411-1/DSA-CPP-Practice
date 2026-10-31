class Solution {
public:
    long long ans = 0;
    vector<vector<int>> adj;

    int dfs(int node, int parent, int seats) {

        int people = 1;

        for (int child : adj[node]) {

            if (child == parent)
                continue;

            int childPeople = dfs(child, node, seats);

            ans += (childPeople + seats - 1) / seats;

            people += childPeople;
        }

        return people;
    }

    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {

        int n = roads.size() + 1;

        adj.resize(n);
        ans = 0;

        for (auto& road : roads) {
            int u = road[0];
            int v = road[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        dfs(0, -1, seats);

        return ans;
    }
};
