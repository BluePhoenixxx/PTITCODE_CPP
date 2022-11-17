
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned short n;
    cin >>n;
    while (n--)
    {
        string s;
        cin >> s;
        unsigned short s1 = 0,s2 = 0;
        unsigned short len = s.size();
        for (int i =0; i < len ; i+=2) s1 +=  s[i] - 48;
        for (int i =1; i < len ; i+=2) s2 +=  s[i] - 48;
        if (abs(s1-s2)%11) cout << "0" ;
            else cout << "1";
        cout << endl;
    }
    return 0;
}