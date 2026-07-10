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
    int count=1;
    int max = 0;
    int b=0;
    for(int i=0; i<n-1; i++)
    {
        if(a[i]==a[i+1])
        {
            count++;
            if(max<count)
            {
                max = count;
                b = a[i];
            }
        }
        else if(a[i]!=a[i+1])
        {
            count = 1;
        }

    }
    max = max * b;
    cout << "Longest subarray sum: " << max;

    return 0;
}
