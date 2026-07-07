#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter Number: ";
    cin >> a;

    if (a%5==0 && a%11==0)
        cout << "Number is divisible by 5 & 11.";
    else
        cout << "Not divisible.";

    return 0;
}
