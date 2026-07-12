#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubArraySum(vector<int>& arr) {
    int maxSum = INT_MIN;
    int currentSum = 0;

    for (int num : arr) {
        currentSum += num;
        maxSum = max(maxSum, currentSum);

        if (currentSum < 0) {
            currentSum = 0;
        }
    }

    return maxSum;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << maxSubArraySum(arr);

    return 0;
}
