class Solution {
    vector<int> parent, sz;

    int find(int x) {
        if (parent[x] == x)
            return x;
        return parent[x] = find(parent[x]);
    }

    void unite(int a, int b) {
        a = find(a);
        b = find(b);

        if (a == b) return;

        if (sz[a] < sz[b])
            swap(a, b);

        parent[b] = a;
        sz[a] += sz[b];
    }

public:
    vector<bool> distanceLimitedPathsExist(
        int n,
        vector<vector<int>>& edgeList,
        vector<vector<int>>& queries
    ) {
        sort(edgeList.begin(), edgeList.end(),
             [](const auto& a, const auto& b) {
                 return a[2] < b[2];
             });

        int m = queries.size();
        vector<array<int, 4>> q;

        for (int i = 0; i < m; i++) {
            q.push_back({
                queries[i][0],
                queries[i][1],
                queries[i][2],
                i
            });
        }

        sort(q.begin(), q.end(),
             [](const auto& a, const auto& b) {
                 return a[2] < b[2];
             });

        parent.resize(n);
        sz.assign(n, 1);
        iota(parent.begin(), parent.end(), 0);

        vector<bool> ans(m);
        int j = 0;

        for (auto& query : q) {
            int u = query[0];
            int v = query[1];
            int limit = query[2];
            int idx = query[3];

            while (j < edgeList.size() &&
                   edgeList[j][2] < limit) {
                unite(edgeList[j][0], edgeList[j][1]);
                j++;
            }

            ans[idx] = (find(u) == find(v));
        }

        return ans;
    }
};