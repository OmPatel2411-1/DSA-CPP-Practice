#include<iostream>
using namespace std;

int main()
{
    int n,k;
    cout << "Enter n and k: ";
    cin >> n >> k;

    int a[n];
    cout << "Enter elements: ";
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int i,j,temp=0;
    for(j=0; j<k; j++)
    {
        for(i=n-1; i>=0; i--)
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
    }
    cout << "After " << k << " right rotations: ";
    for(i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
