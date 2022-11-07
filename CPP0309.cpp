#include <bits/stdc++.h>
using namespace std;
int
main ()
{
  unsigned short t;
  cin >> t;
  string str;
  while (t--)
    {
        cin.ignore();
      getline(cin, str);
      cout << count(str.begin(), str.end(), ' ') +count(str.begin(), str.end(), '\n') + count(str.begin(), str.end(), '\t')+1 << endl;
    }    
    return 0;
}
