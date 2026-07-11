#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> pos, neg;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x >= 0)
            pos.push_back(x);
        else
            neg.push_back(x);
    }

    int i = 0, j = 0;

    while (i < pos.size() && j < neg.size()) {
        cout << pos[i++] << " ";
        cout << neg[j++] << " ";
    }

    while (i < pos.size())
        cout << pos[i++] << " ";

    while (j < neg.size())
        cout << neg[j++] << " ";

    return 0;
}
