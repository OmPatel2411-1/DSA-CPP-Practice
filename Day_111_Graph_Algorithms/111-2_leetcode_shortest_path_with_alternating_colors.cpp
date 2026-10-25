class Solution {
public:
    vector<int> shortestAlternatingPaths(
        int n,
        vector<vector<int>>& redEdges,
        vector<vector<int>>& blueEdges
    ) {
        vector<vector<int>> red(n), blue(n);

        for (auto& e : redEdges)
            red[e[0]].push_back(e[1]);

        for (auto& e : blueEdges)
            blue[e[0]].push_back(e[1]);

        vector<vector<int>> dist(n, vector<int>(2, -1));

        queue<pair<int, int>> q;

        q.push({0, 0});
        q.push({0, 1});

        dist[0][0] = dist[0][1] = 0;

        while (!q.empty()) {
            auto [node, color] = q.front();
            q.pop();

            auto& next = (color == 0) ? blue[node] : red[node];
            int nextColor = 1 - color;

            for (int neighbor : next) {
                if (dist[neighbor][nextColor] == -1) {
                    dist[neighbor][nextColor] =
                        dist[node][color] + 1;

                    q.push({neighbor, nextColor});
                }
            }
        }

        vector<int> ans(n, -1);

        for (int i = 0; i < n; i++) {
            if (dist[i][0] != -1 && dist[i][1] != -1)
                ans[i] = min(dist[i][0], dist[i][1]);
            else if (dist[i][0] != -1)
                ans[i] = dist[i][0];
            else if (dist[i][1] != -1)
                ans[i] = dist[i][1];
        }

        return ans;
    }
};
