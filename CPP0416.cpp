#include<bits/stdc++.h>
using namespace std;
int
main ()
{
  unsigned short t;
  cin >> t;
  while (t--)
    {
      unsigned short n, k;
      cin >> n >> k;
      long a[n];
      for (int i = 0; i < n; i++)
	cin >> a[i];
      int cnt = 0;
      for (int i = 0; i < n; i++)
	{
	  int x = k - a[i];
	  for (int j = i + 1; j < n; j++)
	    if (x == a[j])
	      cnt++;
	}
      cout << cnt << endl;
    }
}
