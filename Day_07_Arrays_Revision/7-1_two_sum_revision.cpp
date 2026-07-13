#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;



vector<int> twoSumBrute(vector<int>& nums, int target) {
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }

    return {-1, -1};
}



vector<int> twoSumOptimal(vector<int>& nums, int target) {
    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        if (mp.find(complement) != mp.end()) {
            return {mp[complement], i};
        }

        mp[nums[i]] = i;
    }

    return {-1, -1};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans1 = twoSumBrute(nums, target);
    cout << "Brute Force Answer: ";
    cout << ans1[0] << " " << ans1[1] << endl;

    vector<int> ans2 = twoSumOptimal(nums, target);
    cout << "Optimal Answer: ";
    cout << ans2[0] << " " << ans2[1] << endl;

    return 0;
}
