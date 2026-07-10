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
    for(j=0; j<k ; j++)
    {
        for(i=0; i<n; i++)
        {
            if(i!=0)
            {
                a[i-1] = a[i];
            }
            else if(i==0)
            {
                temp = a[i];
            }
        }
        a[n-1] = temp;
    }

    cout << "After " << k << " left rotations: ";
    for(i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
