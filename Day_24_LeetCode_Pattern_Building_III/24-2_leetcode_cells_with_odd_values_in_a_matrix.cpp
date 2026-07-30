class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<int> rows(m, 0), cols(n, 0);

        for (auto &idx : indices) {
            rows[idx[0]] ^= 1;
            cols[idx[1]] ^= 1;
        }

        int ans = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if ((rows[i] ^ cols[j]) == 1)
                    ans++;
            }
        }

        return ans;
    }
};