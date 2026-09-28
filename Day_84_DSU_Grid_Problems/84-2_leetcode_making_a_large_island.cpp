class Solution {
public:
    int n;
    
    int dfs(vector<vector<int>>& grid, int r, int c, int id) {
        if (r < 0 || r >= n || c < 0 || c >= n || grid[r][c] != 1)
            return 0;

        grid[r][c] = id;

        int area = 1;
        area += dfs(grid, r + 1, c, id);
        area += dfs(grid, r - 1, c, id);
        area += dfs(grid, r, c + 1, id);
        area += dfs(grid, r, c - 1, id);

        return area;
    }

    int largestIsland(vector<vector<int>>& grid) {
        n = grid.size();

        unordered_map<int, int> area;
        int id = 2;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    area[id] = dfs(grid, i, j, id);
                    id++;
                }
            }
        }

        int ans = 0;

        for (auto& [islandId, islandArea] : area)
            ans = max(ans, islandArea);

        int dr[] = {1, -1, 0, 0};
        int dc[] = {0, 0, 1, -1};

        for (int r = 0; r < n; r++) {
            for (int c = 0; c < n; c++) {
                if (grid[r][c] != 0)
                    continue;

                unordered_set<int> seen;
                int newArea = 1;

                for (int k = 0; k < 4; k++) {
                    int nr = r + dr[k];
                    int nc = c + dc[k];

                    if (nr >= 0 && nr < n &&
                        nc >= 0 && nc < n &&
                        grid[nr][nc] > 1) {

                        int islandId = grid[nr][nc];

                        if (seen.insert(islandId).second)
                            newArea += area[islandId];
                    }
                }

                ans = max(ans, newArea);
            }
        }

        return ans;
    }
};
