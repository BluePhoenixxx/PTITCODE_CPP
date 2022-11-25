#include<bits/stdc++.h>
#include <limits.h>
using namespace std;
int
main ()
{
  unsigned short t;
  cin >> t;
  while (t--)
    {
     long max = LONG_MIN , min = LONG_MAX, temp;
      unsigned int m, n;
      cin >> n >> m;
      while (n--)
	    {
	        cin >> temp;
	        if (temp > max)
	            max = temp;
	    }
	   while (m--)
	    {
	        cin >> temp;
	        if (temp < min)
	            min = temp;
	    }
	    cout << min*max << endl;
    }
  return 0;
}
