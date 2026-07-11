#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int missing = -1, repeating = -1;

    for (int i = 1; i <= n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (v[j] == i)
                count++;
        }

        if (count == 0)
            missing = i;
        else if (count == 2)
            repeating = i;
    }

    cout << "Missing: " << missing << endl;
    cout << "Repeating: " << repeating;

    return 0;
}
