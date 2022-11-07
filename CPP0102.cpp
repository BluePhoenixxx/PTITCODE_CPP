
#include <iostream>
#include<cctype>
using namespace std;

int main()
{
    unsigned short n;
    cin >> n;
    char *s = new char(n);
    for (int i = 0 ; i < n ; i++)
    {
        cin >> s[i];
        if (islower(s[i])) 
            cout <<char(s[i] - 32) << endl;
        else 
            cout <<char(s[i] + 32) << endl;
    }
    return 0;
}