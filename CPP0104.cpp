#include <iostream>

using namespace std;

int main()
{
    unsigned short n;
    long long temp = 1;
    long long sum = 1;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        temp*=i;
        sum+=temp;
    }
    cout << sum;
    return 0;
}