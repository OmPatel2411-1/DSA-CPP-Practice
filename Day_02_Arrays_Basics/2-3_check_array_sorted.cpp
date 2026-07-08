#include <iostream>
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

    bool issort=false;
    for(int i=0; i<n-1; i++)
    {
        if(a[i]<a[i+1])
        {
            issort = true;
        }
        else
        {
            issort = false;
            break;
        }
    }
    if(issort)
    {
        cout << "Array is sorted.";
    }
    else
    {
        cout << "Array is not sorted.";
    }
    return 0;
}
