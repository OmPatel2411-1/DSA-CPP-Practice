#include <iostream>
using namespace std;

int main()
{
    double radius, area, pi=3.14159;

    cout << "Enter Radius: ";
    cin >> radius;

    area = pi * radius * radius;

    cout << "Area: " << area;

    return 0;
}
