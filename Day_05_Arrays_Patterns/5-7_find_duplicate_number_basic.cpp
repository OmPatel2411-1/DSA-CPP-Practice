#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n; i++) {
        bool found = false;

        for (int j = i + 1; j < n; j++) {
            if (v[i] == v[j]) {
                found = true;
                break;
            }
        }

        if (found) {
            cout << v[i];
            return 0;
        }
    }

    return 0;
}
