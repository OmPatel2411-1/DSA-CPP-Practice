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
        bool leader = true;

        for (int j = i + 1; j < n; j++) {
            if (v[j] > v[i]) {
                leader = false;
                break;
            }
        }

        if (leader)
            cout << v[i] << " ";
    }

    return 0;
}
