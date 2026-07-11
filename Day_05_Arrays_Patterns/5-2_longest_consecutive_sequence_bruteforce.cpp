#include <iostream>
#include <vector>
using namespace std;

bool search(vector<int> &v, int x) {
    for (int num : v)
        if (num == x)
            return true;
    return false;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int longest = 0;

    for (int i = 0; i < n; i++) {
        int current = v[i];
        int count = 1;

        while (search(v, current + 1)) {
            current++;
            count++;
        }

        if (count > longest)
            longest = count;
    }

    cout << longest;

    return 0;
}
