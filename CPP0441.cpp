

#include <iostream>
using namespace std;


int main()
{
    unsigned short t;
    cin >> t;
    while(t--)
    {
       unsigned int n, x, k, dem = 0;
       bool check = false;
       cin >> n >> x;
       unsigned int a[n];
       for (int i = 0 ; i < n ; i++)
       {
           cin >> a[i];
           if (a[i] == x && dem == 0)
            {
                cout << i+1;
                check = true;
                dem++;
            }
       }
      if (!check)
        cout << "-1";
    cout << endl;
    }