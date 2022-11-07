#include<iostream>
#include<algorithm>
using namespace std;

int main ()
{
  unsigned short t,n,k;
  cin >> t;
  while (t--)
    {
    cin >> n >> k;
    unsigned int *a = new unsigned int[n];
    for(int i = 0; i < n ; i++)
        cin >> a[i];
    sort(a, a+n);
    cout << a[k-1] << endl;
    }
}
