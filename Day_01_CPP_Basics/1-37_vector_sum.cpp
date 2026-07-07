#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n,sum=0;
    cout << "Enter n: ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter elements: ";
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
        sum = sum + v[i];
    }

    cout << "Sum: " << sum;

    return 0;

}
