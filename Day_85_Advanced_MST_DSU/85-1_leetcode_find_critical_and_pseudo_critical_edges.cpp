class Solution {
public:
    struct DSU {
        vector<int> parent, rank;

        DSU(int n) {
            parent.resize(n);
            rank.resize(n, 0);
            iota(parent.begin(), parent.end(), 0);
        }

        int find(int x) {
            if (parent[x] == x) return x;
            return parent[x] = find(parent[x]);
        }

        bool unite(int a, int b) {
            a = find(a);
            b = find(b);

            if (a == b) return false;

            if (rank[a] < rank[b])
                swap(a, b);

            parent[b] = a;

            if (rank[a] == rank[b])
                rank[a]++;

            return true;
        }
    };

    int kruskal(int n, vector<vector<int>>& edges,
                int skip, int force) {

        DSU dsu(n);
        int cost = 0;
        int count = 0;

        if (force != -1) {
            auto &e = edges[force];

            if (dsu.unite(e[0], e[1])) {
                cost += e[2];
                count++;
            }
        }

        for (int i = 0; i < edges.size(); i++) {
            if (i == skip || i == force)
                continue;

            auto &e = edges[i];

            if (dsu.unite(e[0], e[1])) {
                cost += e[2];
                count++;
            }
        }

        if (count != n - 1)
            return INT_MAX;

        return cost;
    }

    vector<vector<int>> findCriticalAndPseudoCriticalEdges(
        int n, vector<vector<int>>& edges) {

        for (int i = 0; i < edges.size(); i++) {
            edges[i].push_back(i);
        }

        sort(edges.begin(), edges.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[2] < b[2];
             });

        int baseCost = kruskal(n, edges, -1, -1);

        vector<int> critical;
        vector<int> pseudo;

        for (int i = 0; i < edges.size(); i++) {

            int without = kruskal(n, edges, i, -1);

            if (without > baseCost) {
                critical.push_back(edges[i][3]);
                continue;
            }

            int with = kruskal(n, edges, -1, i);

            if (with == baseCost) {
                pseudo.push_back(edges[i][3]);
            }
        }

        return {critical, pseudo};
    }
};
