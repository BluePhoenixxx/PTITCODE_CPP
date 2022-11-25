#include <iostream>
#include <algorithm>
using namespace std;
int
main ()
{
  unsigned short t;
  cin >> t;
  while (t--)
    {
      unsigned short c, l, n;
      cin >> c >> l;
      n = c*l;
      unsigned short a[n];
      for (int i = 0; i < n ; i++)
        cin >> a[i];

	sort (a,a +n);
      for (int i = 0; i < n; i++)
	    {
	        cout <<a[i] << " ";
	    } cout << endl;
    }
    return 0;
}
