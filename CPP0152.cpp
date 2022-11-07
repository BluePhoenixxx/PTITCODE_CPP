#include <iostream>
using namespace std;
void chiaDu(unsigned short a, unsigned short m)
{
  for (int i = 1; i < m; i++)
    {
      unsigned long temp = a * i;
      if (temp % m == 1) 
      {
          cout << i << endl;
          return;
      }
    }
    cout << "-1" << endl;
}

int main ()
{
  unsigned short a ,m;
  unsigned short t;
  cin >> t;
  while (t--)
    {
        cin >> a >> m;
	    chiaDu(a,m);
    }
  return 0;
}
