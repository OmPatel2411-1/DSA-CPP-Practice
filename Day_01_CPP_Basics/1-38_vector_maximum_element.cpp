#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,m=0;
    cout << "Enter n: ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter elements: ";
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
        if(m<v[i])
        {
            m = v[i];
        }
    }

    cout << "Max: " << m;
    return 0;
}
