#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> a(n);

    cout << "Enter elements: ";
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int count = 1;

    for(int i=0; i<n-1; i++)
    {
        if(a[i] == a[i+1])
        {
            count++;
        }
        else
        {
            cout << "Frequency of " << a[i] << " = " << count << endl;
            count = 1;
        }
    }

    cout << "Frequency of " << a[n-1] << " = " << count << endl;

    return 0;
}
