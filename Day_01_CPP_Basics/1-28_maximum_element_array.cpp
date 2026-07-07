#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size or array: ";
    cin >> n;

    int a[n],max=0,place=0;
    for(int i=0; i<n; i++)
    {
        cout << "Enter array element " << i << ": ";
        cin >> a[i];
        if(a[i]>max)
        {
            max = a[i];
            place = i;
        }
    }
    cout << "Maximum: " << max << " at " << place << " position.";

    return 0;
}
