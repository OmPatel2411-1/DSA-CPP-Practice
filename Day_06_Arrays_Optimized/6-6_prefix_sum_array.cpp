#include <iostream>
#include <vector>
using namespace std;

vector<int> prefixSum(vector<int>& arr) {
    vector<int> prefix(arr.size());

    prefix[0] = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    return prefix;
}

int main() {
    vector<int> arr = {2, 4, 6, 8, 10};

    vector<int> prefix = prefixSum(arr);

    for (int x : prefix) {
        cout << x << " ";
    }

    return 0;
}
