class Solution {
public:
    struct DSU {
        vector<int> parent, sz;
        int components;

        DSU(int n) {
            parent.resize(n + 1);
            sz.assign(n + 1, 1);
            components = n;

            iota(parent.begin(), parent.end(), 0);
        }

        int find(int x) {
            if (parent[x] == x)
                return x;

            return parent[x] = find(parent[x]);
        }

        bool unite(int a, int b) {
            a = find(a);
            b = find(b);

            if (a == b)
                return false;

            if (sz[a] < sz[b])
                swap(a, b);

            parent[b] = a;
            sz[a] += sz[b];

            components--;
            return true;
        }
    };

    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {

        DSU alice(n);
        DSU bob(n);

        int used = 0;

        for (auto &e : edges) {
            if (e[0] == 3) {
                bool a = alice.unite(e[1], e[2]);
                bool b = bob.unite(e[1], e[2]);

                if (a || b)
                    used++;
            }
        }

        for (auto &e : edges) {
            if (e[0] == 1) {
                if (alice.unite(e[1], e[2]))
                    used++;
            }
        }

        for (auto &e : edges) {
            if (e[0] == 2) {
                if (bob.unite(e[1], e[2]))
                    used++;
            }
        }

        if (alice.components != 1 || bob.components != 1)
            return -1;

        return edges.size() - used;
    }
};
