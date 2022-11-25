#include <iostream>
using namespace std;


int main()
{
    unsigned short t;
    cin >> t;
    while(t--)
    {
        unsigned int n;
        unsigned int m;
        unsigned int a[3] = {0};
        cin >> n;
        for (int i = 0; i< n; i ++)
        {
            cin >> m;
            a[m]++;
        }
        for (int i = 0 ; i <= 2; i++)
        {
            for (int j = 0 ; j < a[i]; j++)
                cout << i << " ";
        }
        cout << endl;
    }
}