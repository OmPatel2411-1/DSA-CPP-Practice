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
    int largest = a[0];

    for(int i=1; i<n; i++)
    {
        if(largest<a[i])
        {
            largest = a[i];
        }
    }
    cout << "Largest: " << largest;

    return 0;
}
