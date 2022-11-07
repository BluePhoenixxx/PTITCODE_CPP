#include<vector>
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
      vector < int >v;
      for (int i = 0; i < n; i++)
	{
	  cin >> x;
	  if (x > max)
	  {
	    v.push_back(x);
	    max = x;  
	  }
	} 
	cout << max << endl;
    }
}