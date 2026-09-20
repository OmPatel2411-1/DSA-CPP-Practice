class Solution {
public:
    int m, n;
    vector<vector<int>> heights;
    
    void dfs(int r, int c, vector<vector<bool>>& vis) {
        vis[r][c] = true;

        int dr[] = {1, -1, 0, 0};
        int dc[] = {0, 0, 1, -1};

        for (int k = 0; k < 4; k++) {
            int nr = r + dr[k];
            int nc = c + dc[k];

            if (nr < 0 || nr >= m || nc < 0 || nc >= n)
                continue;

            if (vis[nr][nc])
                continue;

            if (heights[nr][nc] < heights[r][c])
                continue;

            dfs(nr, nc, vis);
        }
    }

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        this->heights = heights;
        m = heights.size();
        n = heights[0].size();

        vector<vector<bool>> pacific(m, vector<bool>(n, false));
        vector<vector<bool>> atlantic(m, vector<bool>(n, false));

        for (int c = 0; c < n; c++) {
            dfs(0, c, pacific);
            dfs(m - 1, c, atlantic);
        }

        for (int r = 0; r < m; r++) {
            dfs(r, 0, pacific);
            dfs(r, n - 1, atlantic);
        }

        vector<vector<int>> ans;

        for (int r = 0; r < m; r++) {
            for (int c = 0; c < n; c++) {
                if (pacific[r][c] && atlantic[r][c]) {
                    ans.push_back({r, c});
                }
            }
        }

        return ans;
    }
};
