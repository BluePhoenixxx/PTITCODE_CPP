
#include<bits/stdc++.h>
using namespace std;
int main ()
{
  unsigned short n;
  cin >> n;
  cin.ignore ();
  set < string > hpny;
  for (int i = 0; i < n; i++)
    {
      string a;
      getline (cin, a);
      hpny.insert (a);
    } 
    cout << hpny.size ();
    return 0;
}
