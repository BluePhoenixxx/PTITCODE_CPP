/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    unsigned short n;
    cin >> n;
    while (n--)
    {
        unsigned int t;
        cin >> t;
        long long a[t];
        map<long long, bool> mp;
        for (int i = 0; i< t; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        for (int i = 0 ; i < t ; i++)
        {
            if (mp[i]>0)
                cout << i << " ";
            else cout << "-1 ";
        }
        cout << endl;
    }

    return 0;
}
