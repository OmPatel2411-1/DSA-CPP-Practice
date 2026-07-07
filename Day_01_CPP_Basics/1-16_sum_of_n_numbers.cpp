#include <iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout << "Enter N: ";
    cin >> n;

    while(n>=0)
    {
        sum = sum + n;
        n--;
    }
    cout << "Sum: " << sum;
    return 0;
}
