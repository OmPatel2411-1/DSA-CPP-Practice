#include <iostream>
using namespace std;

int main()
{
    int a,b, remainder;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;

    remainder = a % b;

    cout << "Remainder: " << remainder;

    return 0;
}
