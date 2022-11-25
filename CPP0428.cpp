

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    unsigned short t;
    cin >> t;
    unsigned int m , n;
    while (t--)
    {
        cin >> m >> n ;
        int *a = new int[m+n];
        for (int i = 0 ; i < m+n ; i++)
            cin >> a[i];
        sort(a, a+n+m);
        for (int i = 0 ; i < m+n ; i++)
            cout << a[i] << " ";
        cout << endl;
    }

    return 0;
}
