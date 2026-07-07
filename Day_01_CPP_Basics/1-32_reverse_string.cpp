#include<iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter string: ";
    cin >> s;

    int start = 0;
    int end = s.length() - 1;

    while(start<end)
    {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }

    cout << "Reverse string: " << s;

    return 0;
}
