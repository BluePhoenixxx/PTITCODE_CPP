#include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int t;
  cin >> t;
  while (t--)
    {
      unsigned int n, dem = 0, a;
      cin >> n;
      while(n--)
	    {
	    cin >> a;
	        if (a!= 0)
	        cout << a << " ";
	    else
	    dem++;
	   }
    for (int i = 1; i <= dem; i++)
	    cout << "0" << " ";
     cout << endl;
    }
    return 0;
}