

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    unsigned short n, temp = 0;
    cin >> n;
    unsigned short a[n];
    for (int i = 0; i <n; i++)
       cin >> a[i];
    sort(a, a+n);
    for (int i = 0; i< n; i++)
    {
        if (a[i]==temp)
            continue;
        cout << a[i] << " "; 
        temp = a[i];
    }
    return 0;
}

