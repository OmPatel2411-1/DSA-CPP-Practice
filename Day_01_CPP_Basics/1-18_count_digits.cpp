#include<iostream>
using namespace std;

int main()
{
    int n;
    int count=0;
    cout << "Enter N: ";
    cin >> n;

    if (n == 0)
        count = 1;
    else
    {
        while(n!=0)
        {
            n = n / 10;
            count++;
        }
    }
    cout << "Count: " << count;

    return 0;
}
