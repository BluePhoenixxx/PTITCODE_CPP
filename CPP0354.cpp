

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s;
    unsigned short n;
    cin >> n;
    unsigned short temp = 0;
    while(n--)
    {
        cin >> s;
        for (int i = 0; i < s.size();)
        {
            cout << s[i] ;
            temp = count(s.begin(), s.end(), s[i]);
            cout << temp;
            i += temp;
        }
        cout << endl;
    }
    return 0;
}

