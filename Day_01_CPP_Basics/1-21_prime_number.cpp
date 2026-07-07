#include<iostream>
using namespace std;

int main()
{
    int n;
    bool isPrime=true;
    cout << "Enter N: ";
    cin >> n;

    if(n<-1)
    {
        isPrime=false;
    }
    else
    {
        for (int i=2; i<n; i++)
        {
            if(n%i==0)
            {
                isPrime=false;
                break;
            }
        }
    }

    if(isPrime)
    {
        cout << "Prime";
    }
    else
    {
        cout << "Not Prime";
    }

    return 0;
}
