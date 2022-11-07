#include <iostream>
#include <cstring>
using namespace std;

bool check(string s)
{
    unsigned short len = s.size();
    for (int i = 0; i < len/2+1; i++)
    {
        if (s[i] != s[len-1])
            return false;
        len--;
    }
    return true;
}

int main()
{
    unsigned short n;
    cin >> n;
    unsigned long long *a = new unsigned long long[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        string s = to_string(a[i]);
        if (check(s)) 
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}