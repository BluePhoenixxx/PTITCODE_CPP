

#include <iostream>

using namespace std;

int main()
{
    unsigned short t,n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        unsigned short a[n][n];
    for (int i = 0; i < n ; i++)
        for (int j = 0; j < n; j ++)
            cin >> a[i][j];
    unsigned short i = 0, j=1, temp = 1;
    cout << a[0][0] << " ";
    for (int k = 0; k < n*n-1; k++)
    {
        cout << a[i][j] << " ";
        if ((j == n-1) && (i%2==0))
        {
            i++;
            temp = -1;
            j++;
        }
        if ((j == 0)&& (i%2!=0))
        {
            i++;
            temp = 1;
            j--;
        }
        j += temp;
    }
    cout << endl;
    }
    return 0;
}

