class Solution {
public:
    vector<double> calcEquation(
        vector<vector<string>>& equations,
        vector<double>& values,
        vector<vector<string>>& queries
    ) {
        unordered_map<string, vector<pair<string, double>>> graph;

        for (int i = 0; i < equations.size(); i++) {
            string a = equations[i][0];
            string b = equations[i][1];
            double val = values[i];

            graph[a].push_back({b, val});
            graph[b].push_back({a, 1.0 / val});
        }

        vector<double> ans;

        for (auto& query : queries) {
            string src = query[0];
            string dst = query[1];

            if (!graph.count(src) || !graph.count(dst)) {
                ans.push_back(-1.0);
                continue;
            }

            if (src == dst) {
                ans.push_back(1.0);
                continue;
            }

            unordered_set<string> visited;
            double result = dfs(src, dst, 1.0, graph, visited);

            ans.push_back(result);
        }

        return ans;
    }

private:
    double dfs(
        string node,
        string target,
        double product,
        unordered_map<string, vector<pair<string, double>>>& graph,
        unordered_set<string>& visited
    ) {
        if (node == target)
            return product;

        visited.insert(node);

        for (auto& [next, weight] : graph[node]) {
            if (visited.count(next))
                continue;

            double result = dfs(
                next,
                target,
                product * weight,
                graph,
                visited
            );

            if (result != -1.0)
                return result;
        }

        return -1.0;
    }
};
