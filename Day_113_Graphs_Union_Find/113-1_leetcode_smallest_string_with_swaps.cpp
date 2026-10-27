class Solution {
public:
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

    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        int n = s.size();

        parent.resize(n);
        sz.assign(n, 1);
        iota(parent.begin(), parent.end(), 0);

        for (auto& p : pairs) {
            unite(p[0], p[1]);
        }

        unordered_map<int, priority_queue<char, vector<char>, greater<char>>> groups;

        for (int i = 0; i < n; i++) {
            groups[find(i)].push(s[i]);
        }

        for (int i = 0; i < n; i++) {
            int root = find(i);
            s[i] = groups[root].top();
            groups[root].pop();
        }

        return s;
    }
};
