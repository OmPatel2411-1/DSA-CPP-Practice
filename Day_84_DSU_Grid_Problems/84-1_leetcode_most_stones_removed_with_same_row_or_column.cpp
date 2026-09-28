class Solution {
public:
    vector<int> parent, rankv;

    int find(int x) {
        if (parent[x] == x)
            return x;

        return parent[x] = find(parent[x]);
    }

    void unite(int a, int b) {
        a = find(a);
        b = find(b);

        if (a == b)
            return;

        if (rankv[a] < rankv[b])
            swap(a, b);

        parent[b] = a;

        if (rankv[a] == rankv[b])
            rankv[a]++;
    }

    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();

        parent.resize(n);
        rankv.assign(n, 0);

        for (int i = 0; i < n; i++)
            parent[i] = i;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (stones[i][0] == stones[j][0] ||
                    stones[i][1] == stones[j][1]) {
                    unite(i, j);
                }
            }
        }

        int components = 0;

        for (int i = 0; i < n; i++) {
            if (find(i) == i)
                components++;
        }

        return n - components;
    }
};
