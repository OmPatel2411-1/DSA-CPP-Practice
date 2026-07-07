#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n,key=0;
    cout << "Enter n: ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter elements: ";
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    cout << "Enter value to find: ";
    cin >> key;

    bool a = false;
    int j=0;
    for(int i=0; i<n; i++)
    {
        if(key==v[i])
        {
            a = true;
            j = i;
            break;
        }
    }
    if(a)
    {
        cout << "Value found at: " << j;
    }
    else
    {
        cout << "Value not found";
    }
    return 0;
}
