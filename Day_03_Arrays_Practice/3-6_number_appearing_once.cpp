#include<iostream>
#include<vector>
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
    vector<int> na;

    bool once=false;
    int count=0;
    for(int j=0; j<n; j++)
    {
        count = 0;
        for(int i=0; i<n; i++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count==1)
        {
            na.push_back(a[j]);
        }
    }

    cout << "Number appearing once: ";
    for(int i : na)
    {
        cout << i << " " ;
    }
}
