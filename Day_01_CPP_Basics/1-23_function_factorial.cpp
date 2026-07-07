#include<iostream>
using namespace std;

long long fact(int n)
{
    long long fact=1;

    for(int i=1; i<=n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;

    cout << "Factorial: " << fact(n);

    return 0;
}
