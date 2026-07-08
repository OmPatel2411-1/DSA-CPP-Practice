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
    int index=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]!=0)
        {
            a[index] = a[i];
            index++;
        }
    }
    while(index<n)
    {
        a[index]=0;
        index++;
    }
    cout << "Zeros at end: ";
    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
