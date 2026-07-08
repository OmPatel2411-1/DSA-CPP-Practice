#include<iostream>
using namespace std;

int main()
{
    int n=5;
    int a[5] = {1,2,3,5};

    int expectedsum = n*(n+1)/2;
    int actualsum = 0;

    for(int i=0; i<n-1; i++)
    {
        actualsum = actualsum + a[i];
    }
    int missing = expectedsum - actualsum;
    cout << "Missing number: " << missing;
}
