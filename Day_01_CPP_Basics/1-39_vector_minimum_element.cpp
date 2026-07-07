#include <iostream>
#include <vector>
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
    int m = v[0];
    for(int i=1; i<n; i++)
    {
        if(m>v[i])
        {
            m = v[i];
        }
    }
    cout << "Min: " << m;
    return 0;
}
