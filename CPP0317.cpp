#include <bits/stdc++.h>
using namespace std;

bool checkSoDep(string s)
{
    unsigned short  len = s.size()-1;
    for (int i = 0 ; i < len/2; i++)
    {
        if ((s[i]%2!=0) || (s[i] != s[len-i]))
            return false;
    }
    return true;
}

int main ()
{
  unsigned short n;
  cin >> n ;
  string s;
  while (n--)
  {
      cin >> s;
      if (checkSoDep(s))
        cout << "YES" ;
    else cout << "NO" ;
    cout << endl;
  }
  
}
