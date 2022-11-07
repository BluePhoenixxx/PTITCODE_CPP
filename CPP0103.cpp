#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    unsigned int n;
    double sum = 1;
    cin >> n;
    for (int i = 2 ; i <= n ; i++)
    {
        sum += double(1)/i;
    }
    printf("%.4lf", sum);
    return 0;
}