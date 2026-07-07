#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cout << "Enter array element " << i << ": ";
        cin >> a[i];
    }

    cout << "Reverse Array" << endl;

    for(int i=n-1; i>=0; i--)
    {
         cout << a[i] << " ";
    }

    return 0;
}
