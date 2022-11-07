

#include <iostream>

using namespace std;

int main()
{
    unsigned short n, dem = 0;
    cin >> n;
    unsigned short a[n][n];
    for (int i = 0; i < n ; i++)
    {   
        unsigned short temp = 0;
        for (int j = 0; j < 3; j ++)
        {
            cin >> a[i][j];
            temp += a[i][j];
        }
        if (temp > 1)
            dem++;
    }
    cout << dem;
    return 0;
}

