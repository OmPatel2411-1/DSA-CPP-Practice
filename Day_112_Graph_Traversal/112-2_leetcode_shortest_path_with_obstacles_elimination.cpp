class Solution {
public:
    int shortestPath(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        if (m == 1 && n == 1) return 0;

        if (k >= m + n - 2) return m + n - 2;

        vector<vector<int>> best(m, vector<int>(n, -1));

        queue<array<int, 4>> q;
        q.push({0, 0, k, 0});
        best[0][0] = k;

        int dr[] = {1, -1, 0, 0};
        int dc[] = {0, 0, 1, -1};

        while (!q.empty()) {
            auto [r, c, rem, steps] = q.front();
            q.pop();

            for (int d = 0; d < 4; d++) {
                int nr = r + dr[d];
                int nc = c + dc[d];

                if (nr < 0 || nr >= m || nc < 0 || nc >= n)
                    continue;

                int newRem = rem - grid[nr][nc];

                if (newRem < 0 || newRem <= best[nr][nc])
                    continue;

                if (nr == m - 1 && nc == n - 1)
                    return steps + 1;

                best[nr][nc] = newRem;
                q.push({nr, nc, newRem, steps + 1});
            }
        }

        return -1;
    }
};
