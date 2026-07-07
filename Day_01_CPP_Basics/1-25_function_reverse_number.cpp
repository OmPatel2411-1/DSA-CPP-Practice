#include <iostream>
using namespace std;

int reverse(int n)
{
    int reverse = 0;
    while(n!=0)
    {
        int d = n % 10;
        reverse = reverse * 10 + d;
        n = n / 10;
    }
    return reverse;
}

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;

    cout << "After Reverse: " << reverse(n);

    return 0;
}
