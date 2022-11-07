#include <iostream>
using namespace std;
int main()
{
    unsigned long a[10];
    unsigned short n;
    cin >> n;
    for (int i = 0 ; i< n; i++)
    {
        cin >> a[i];
        cout << (a[i]*(a[i]+1))/2 << endl;
    }
    return 0;
}
