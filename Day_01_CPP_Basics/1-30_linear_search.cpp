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
    int k=0,place=0;
    cout << "Enter value to find: ";
    cin >> k;

    for(int i=0; i<n; i++)
    {
        if(k==a[i])
        {
            place = i;
            cout << "Element is found at " << place << " in array.";
            break;
        }
        if(i==n-1 && k!=a[i])
        {
            cout << "Element not found.";
        }
    }

    return 0;
}
