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
    int largestsec = -1;
    for(int i=1; i<n; i++)
    {
        if(a[i]>largest)
        {
            largestsec = largest;
            largest = a[i];
        }
        else if(a[i]<largest && a[i]>largestsec)
        {
            largestsec = a[i];
        }
    }

    cout << "Largest Second: " << largestsec;
    return 0;
}
