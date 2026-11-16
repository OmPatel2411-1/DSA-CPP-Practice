class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());

        while (low < high) {
            int mid = low + (high - low) / 2;

            long long operations = 0;

            for (int x : nums) {
                operations += (x - 1) / mid;
            }

            if (operations <= maxOperations) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};
