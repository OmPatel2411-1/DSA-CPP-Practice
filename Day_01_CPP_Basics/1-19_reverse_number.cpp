#include<iostream>
using namespace std;

int main()
{
    int n;
    int r=0;
    cout << "Enter N: ";
    cin >> n;

    while(n!=0)
    {
        int d = n % 10;
        r = r * 10 + d;
        n = n / 10;
    }
    cout << "Reverse: " << r;

    return 0;
}
