#include <iostream>
#include <string>
using namespace std;

void xoa084(string &s)
{
    unsigned char index = s.find("084");
    s.erase(index, 3);
}

int main()
{
    unsigned short n;
    cin >> n;
    long long *a = new long long[n];
    for (int i = 0; i < n ; i++)
    {
        cin >> a[i];
        string s = to_string(a[i]);
        xoa084(s);
        cout << s <<endl;
    }
    return 0;
}