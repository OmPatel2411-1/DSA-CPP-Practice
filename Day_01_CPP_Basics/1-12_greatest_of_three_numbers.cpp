#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter A, B and C: ";
    cin >> a >> b >> c;

    if(a>=b && a>=c)
        cout << "A is Greatest: " << a;
    else if(b>=a && b>=c)
        cout << "B is Greatest: " << b;
    else
        cout << "C is Greatest: " << c;

    return 0;
}
