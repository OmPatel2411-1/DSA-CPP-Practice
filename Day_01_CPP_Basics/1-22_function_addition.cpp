#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int x,y;
    cout << "Enter Numbers: ";
    cin >> x >> y;

    int result = add(x,y);

    cout << "Sum: " << result;

    return 0;
}
