#include<iostream>
using namespace std;

int main()
{
    int n,k;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter k: ";
    cin >> k;
    int a[n];
    cout << "Enter elements: ";
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int sum=0;
    cout << "Two Sum Bruteforce: " << endl;
    for(int j=0; j<n; j++)
    {
        for(int i=j+1; i<n; i++)
        {
            if(a[j]+a[i]==k)
            {
                cout << a[j] << " + " << a[i] << " = " << k << endl;
            }
        }
    }
    return 0;
}
