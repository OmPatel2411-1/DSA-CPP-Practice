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

    int temp=0;

    for(int i=n-1; i>=0; i--)
    {

        if(i!=n-1)
        {
            a[i+1] = a[i];
        }
        else if(i==n-1)
        {
            temp = a[i];
        }
    }
    a[0] = temp;


    cout << "After one right rotate: ";
    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
