#include <iostream>
#include <vector>
using namespace std;

vector<int> prefixSum(vector<int>& nums) {
    int n = nums.size();
    vector<int> prefix(n);

    prefix[0] = nums[0];

    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + nums[i];
    }

    return prefix;
}

int rangeSum(vector<int>& prefix, int l, int r) {
    if (l == 0)
        return prefix[r];
    return prefix[r] - prefix[l - 1];
}

int main() {
    vector<int> nums = {2, 4, 6, 8, 10};

    vector<int> prefix = prefixSum(nums);

    cout << "Prefix Sum Array: ";
    for (int x : prefix)
        cout << x << " ";
    cout << endl;

    int l = 1, r = 3;
    cout << "Sum from index " << l << " to " << r << ": " << rangeSum(prefix, l, r) << endl;

    return 0;
}
