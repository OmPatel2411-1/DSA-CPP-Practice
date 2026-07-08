#include<iostream>
#include<vector>
#include<algorithm>
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

    if(n==0)
    {
        cout << "Array is empty.";
        return 0;
    }

    sort(v.begin(),v.end());

    int index = 0;
    for(int i=1; i<n; i++)
    {
     if(v[index]!=v[i])
     {
         index++;
         v[index] = v[i];
     }
    }

    cout << "Array after removing duplicates: ";
    for(int i=0; i<=index; i++)
    {
     cout << v[i] << " ";
    }


    return 0;
}
