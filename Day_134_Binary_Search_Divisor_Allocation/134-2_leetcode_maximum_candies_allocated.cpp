class Solution {
public:
    bool canDistribute(vector<int>& candies, long long k, int mid) {
        long long count = 0;

        for (int candy : candies) {
            count += candy / mid;
        }

        return count >= k;
    }

    int maximumCandies(vector<int>& candies, long long k) {
        int low = 0;
        int high = *max_element(candies.begin(), candies.end());

        while (low < high) {
            int mid = low + (high - low + 1) / 2;

            if (canDistribute(candies, k, mid)) {
                low = mid;
            } 
            else {
                high = mid - 1;
            }
        }

        return low;
    }
};
