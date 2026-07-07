#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int a[n], sum=0;
    for(int i=0; i<n; i++)
    {
        cout << "Enter array element " << i << ": ";
        cin >> a[i];
        sum = sum + a[i];
    }

    cout << "Sum: " << sum;

    return 0;
}
