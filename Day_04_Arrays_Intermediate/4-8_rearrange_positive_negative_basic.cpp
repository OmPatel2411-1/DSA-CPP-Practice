#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    vector<int> positive;
    vector<int> negative;
    vector<int> result;

    for (int x : nums) {
        if (x >= 0)
            positive.push_back(x);
        else
            negative.push_back(x);
    }

    int i = 0, j = 0;

    while (i < positive.size() && j < negative.size()) {
        result.push_back(positive[i++]);
        result.push_back(negative[j++]);
    }

    while (i < positive.size())
        result.push_back(positive[i++]);

    while (j < negative.size())
        result.push_back(negative[j++]);

    return result;
}

int main() {
    vector<int> nums = {1,2,-3,-4,5,-6};

    vector<int> ans = rearrangeArray(nums);

    for (int x : ans)
        cout << x << " ";

    return 0;
}
