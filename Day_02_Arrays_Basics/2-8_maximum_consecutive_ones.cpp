#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int a[n];
    int count=0;
    int max=0;
    cout << "Enter elements: ";
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]==1)
        {
            count++;
            if(max<count)
            {
                max = count;
            }
        }
        else
        {
            count = 0;
        }
    }
    cout << "Max consecutive: " << max;
    return 0;

}
