#include <iostream>
using namespace std;

int main()
{
    string s;
    int count=0;
    cout << "Enter String: ";
    cin >> s;

    for(int i=0; i<=s.length(); i++)
    {
        char ch = s[i];

        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            count++;
        }
    }
    cout << "Count of vowels: " << count;

    return 0;
}
