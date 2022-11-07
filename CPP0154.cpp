#include <iostream>
using namespace std;

unsigned long long tongLienTuc(unsigned short n)
{
    return (n+1)*n/2;
}

int main(int argc, char const *argv[])
{
    unsigned short t, n;
    cin >> t;
    unsigned long long k;
    while (t--)
    {
        cin >> n >> k;
        if (n < k)
            cout << ((tongLienTuc(n) == k) ? "1" : "0") << endl ;
        else 
        {
            cout << ((((n/k)*tongLienTuc(k) + tongLienTuc(n%k) - (n/k)*k) == k) ? "1" : "0") << endl;
        }
    }
    return 0;
}