#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,m;
    cout << "Enter n for array 1 and m for array 2: ";
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);
    cout << "Enter Elements for array 1: ";
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter Elements for array 2: ";
    for(int i=0; i<m; i++)
    {
        cin >> b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int na[n+m];
    int x=0,y=0;
    for(int i=0; i<n+m; i++)
    {
        if(x==n)
        {
            na[i] = b[y];
            y++;
        }
        else if(y==m)
        {
            na[i] = a[x];
            x++;
        }
        else if(a[x]<b[y])
        {
            na[i] = a[x];
            x++;
        }
        else if(b[y]<a[x])
        {
            na[i] = b[y];
            y++;
        }
        else if(a[x]==b[y])
        {
            na[i] = a[x];
            x++;
        }
    }

    cout << "Combines array: ";
    for(int i=0; i<n+m; i++)
    {
        cout << na[i] << " ";
    }
    return 0;
}
