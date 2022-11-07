
#include<iostream>
using namespace std;
int
main ()
{
  unsigned short n, t;
  cin >> t;
  while (t--)
    {
      cin >> n;
      unsigned short x;
      short max = 0;
      for (int i = 0; i < n; i++)
	{
	  cin >> x;
	  if (x > max)
	  {
	    max = x;  
	  }
	} 
	cout << max << endl;
    }
}