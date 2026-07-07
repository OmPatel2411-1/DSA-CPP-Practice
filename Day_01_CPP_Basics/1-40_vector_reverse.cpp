#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter elements: ";
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    int start=0;
    int end=n-1;

    while(start<end)
    {
        int temp = v[start];
        v[start] = v[end];
        v[end] = temp;

        start++;
        end--;
    }

    cout << "Reversed: ";
    for(int i=0; i<n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
