class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        int ans = 0;

        for (int bit = 0; bit < 31; bit++) {
            int cnt = 0;

            for (int num : nums) {
                if (num & (1 << bit))
                    cnt++;
            }

            if (cnt >= k)
                ans |= (1 << bit);
        }

        return ans;
    }
};