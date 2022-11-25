 #include<iostream>
#include<vector>
#include<map>
using namespace std;
int main ()
{
  unsigned short t;
  cin >> t;
  while (t--)
    {
        unsigned short n ,dem =0;
        map<unsigned short, unsigned short> mp;
        short max = -1 , min = 9000;
        cin >> n;
        unsigned short a[n];
        for (int  i = 0 ; i < n ; i++)
        {
            cin >> a[i];
            if (a[i] > max)
                max = a[i];
            if (a[i] < min)
                min = a[i];
            mp[a[i]]++;
        }
        for (int i = min+1 ; i < max; i++)
        {
            if (mp[i]==0)
                dem++;
        }
        cout << dem << endl;
    } 
  return 0;
}