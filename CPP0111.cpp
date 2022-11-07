#include <iostream>
#include <math.h>
#include <string>
using namespace std;

bool
isLienKe (string s)
{
  for (int i = 0; i < s.size () - 1; i++)
    {
      if (abs (s[i] - s[i + 1]) != 1)
	return false;
    }
  return true;
}

int
main ()
{
  unsigned short n;
  cin >> n;
  long long *a = new long long[n];
  for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      string s = to_string (a[i]);
      if (isLienKe (s))
	cout << "YES" << endl;
      else
	cout << "NO" << endl;
    }
  return 0;
}
