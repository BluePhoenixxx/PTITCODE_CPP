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
            cout << tongLienTuc(n) << endl;
        else 
        {
            cout << (n/k)*tongLienTuc(k) + tongLienTuc(n%k) - (n/k)*k << endl;
            
        }
    }
    return 0;
}