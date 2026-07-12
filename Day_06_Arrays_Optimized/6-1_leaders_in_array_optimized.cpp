#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findLeaders(vector<int>& arr) {
    vector<int> leaders;

    int maxRight = arr[arr.size() - 1];
    leaders.push_back(maxRight);

    for (int i = arr.size() - 2; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            maxRight = arr[i];
            leaders.push_back(arr[i]);
        }
    }
    reverse(leaders.begin(), leaders.end());

    return leaders;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};

    vector<int> leaders = findLeaders(arr);

    cout << "Leaders in the array are: ";
    for (int leader : leaders) {
        cout << leader << " ";
    }

    return 0;
}
