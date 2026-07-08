#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int a[n];

    cout << "Enter elements: ";
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int first = a[0];
    for(int i=0; i<n-1; i++)
    {
        a[i] = a[i+1];
    }
    a[n-1] = first;
    cout << "Array after one left rotate: ";
    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
