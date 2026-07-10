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
    cout << "Enter elements for array 1: ";
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter elements for array 2: ";
    for(int i=0; i<m; i++)
    {
        cin >> b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    vector<int> na;
    int x=0,y=0,count=0;

    while(x<n && y<m)
    {
        if(a[x]==b[y])
        {
            na.push_back(a[x]);
            x++;
            y++;
        }
        else if(a[x]<b[y])
        {
            x++;
        }
        else
        {
            y++;
        }
    }

    cout << "Intersection of 2 arrays: ";
    for(int i : na)
    {
        cout << i << " ";
    }

    return 0;
}
