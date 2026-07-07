#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter string: ";
    cin >> s;

    int start = 0;
    int end = s.length() - 1;
    bool pali=true;

    while(start<end)
    {
        if(s[start]!=s[end])
        {
            pali = false;
            break;
        }
        start++;
        end--;
    }

    if(pali)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "No Palindrome";
    }

    return 0;
}
