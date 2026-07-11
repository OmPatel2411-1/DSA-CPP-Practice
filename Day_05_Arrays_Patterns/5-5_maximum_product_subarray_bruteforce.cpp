#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int maxi = v[0];

    for (int i = 0; i < n; i++) {
        int product = 1;

        for (int j = i; j < n; j++) {
            product *= v[j];

            if (product > maxi)
                maxi = product;
        }
    }

    cout << maxi;

    return 0;
}
