#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter elements: ";
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(),v.end());

    cout << "Sorted Vector ";
    for(int i=0; i<n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
