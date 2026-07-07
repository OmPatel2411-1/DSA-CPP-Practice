#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Enter A and B: ";
    cin >> a >> b;

    if(a>b)
        cout << "A is greater then B.";
    else if(b>a)
        cout << "B is greater then A.";
    else
        cout << "Both are equal.";

    return 0;
}
