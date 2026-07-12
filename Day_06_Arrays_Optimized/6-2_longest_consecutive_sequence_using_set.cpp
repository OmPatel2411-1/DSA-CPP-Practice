#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    unordered_set<int> st(nums.begin(), nums.end());
    int longest = 0;

    for (int num : st) {
        if (st.find(num - 1) == st.end()) {
            int currentNum = num;
            int currentStreak = 1;

            while (st.find(currentNum + 1) != st.end()) {
                currentNum++;
                currentStreak++;
            }

            longest = max(longest, currentStreak);
        }
    }

    return longest;
}

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};

    cout << "Length of longest consecutive sequence: "
         << longestConsecutive(nums);

    return 0;
}
