class Solution {
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int sum = 0;

        for (int x : nums)
            sum += x;

        if (sum % k != 0)
            return false;

        int target = sum / k;

        sort(nums.rbegin(), nums.rend());

        if (nums[0] > target)
            return false;

        vector<bool> used(nums.size(), false);

        return dfs(nums, used, k, 0, 0, target);
    }

    bool dfs(vector<int>& nums, vector<bool>& used,
             int k, int start, int currSum, int target) {
        if (k == 1)
            return true;

        if (currSum == target)
            return dfs(nums, used, k - 1, 0, 0, target);

        for (int i = start; i < nums.size(); i++) {
            if (used[i] || currSum + nums[i] > target)
                continue;

            used[i] = true;

            if (dfs(nums, used, k, i + 1,
                    currSum + nums[i], target))
                return true;

            used[i] = false;

            if (currSum == 0)
                return false;

            while (i + 1 < nums.size() &&
                   nums[i] == nums[i + 1])
                i++;
        }

        return false;
    }
};