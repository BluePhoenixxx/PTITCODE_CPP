#include <iostream>
#include <string>
using namespace std;

bool check(unsigned long n)
{   
    while (n>0)
    {
        unsigned long temp = n%10;
        if ((temp != 0) && (temp !=6) && (temp != 8))
            return false;
        n = n/10;
    }
    return true;
}

int main()
{
    unsigned short n;
    cin >> n;
    unsigned long *a = new unsigned long[n];
    for (int i = 0; i < n; i++)
    {
       cin >> a[i];
       if (check(a[i]))
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}