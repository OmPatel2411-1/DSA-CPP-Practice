#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of Array: ";
    cin >> n;

    int a[n-1];
    for(int i=0; i<n; i++)
    {
        cout << "Enter Array element " << i << ": ";
        cin >> a[i];
    }
    cout << "Array Elements are: ";
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
