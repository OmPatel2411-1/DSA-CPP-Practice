#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter Number: ";
    cin >> a;

    if(a>0)
        cout << "Positive";
    else if(a<0)
        cout << "Negative";
    else
        cout << "Zero";

    return 0;
}
