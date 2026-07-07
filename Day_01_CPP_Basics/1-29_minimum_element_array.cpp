#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int a[n],min=0,place=0;

    cout << "Enter array element 0: ";
    cin >> a[0];
    min = a[0];

    for(int i=1; i<n; i++)
    {
        cout << "Enter array element " << i << ": ";
        cin >> a[i];
        if(min>a[i])
        {
            min = a[i];
            place = i;
        }
    }

    cout << "Minimum: " << min << " at " << place << " position.";

    return 0;
}
