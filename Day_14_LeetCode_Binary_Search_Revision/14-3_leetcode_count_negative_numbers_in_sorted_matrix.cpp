class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;

        for (auto &row : grid) {
            int left = 0, right = n - 1;
            int firstNeg = n;

            while (left <= right) {
                int mid = left + (right - left) / 2;

                if (row[mid] < 0) {
                    firstNeg = mid;
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }

            ans += (n - firstNeg);
        }

        return ans;
    }
};