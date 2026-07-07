#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> v(n);
    int ce = 0;
    int co = 0;
    cout << "Enter elements: ";
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
        if(v[i]%2==0)
        {
            ce++;
        }
        else
        {
            co++;
        }
    }
    cout << "Even: " << ce << "\n";
    cout << "Odd: " << co;
}
