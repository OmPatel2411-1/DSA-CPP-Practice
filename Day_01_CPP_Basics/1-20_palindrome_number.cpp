#include <iostream>
using namespace std;

int main()
{
    int oldn,newn,n;
    cout << "Enter N: ";
    cin >> n;

    oldn = n;

    while(n!=0)
    {
        int d = n % 10;
        newn = newn * 10 + d;
        n = n / 10;
    }
    if(oldn == newn)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }

    return 0;
}
