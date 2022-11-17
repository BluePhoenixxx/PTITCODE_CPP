#include <iostream>
using namespace std;

bool checkChiaHet5(string s)
{
    unsigned short temp = 1, sum = 0;
    unsigned short len = s.size()-1;
    for (int i = len; i >= 0; i--)
    {
        sum +=  (s[i]-48)*temp;
        temp*=2;
        temp%=10;
        sum%=10;
    }
    return (sum%5);
}

int main()
{
    unsigned short n;
    cin >>n;
    while (n--)
    {
        string s;
        cin >> s;
        if (checkChiaHet5(s))
            cout << "No";
        else cout << "Yes";
    cout << endl;
    }
    return 0;
}