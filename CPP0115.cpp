#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
#include <map>
using namespace std;
void phanTichNT (unsigned short n)
{
  map < int, int >m;
  for (int i = 2; i <= n; i++)
    {
      while (n % i == 0)
	{
	  m[i]++;
	  n /= i;
	}
    }

    for (auto it:m)
    {
      cout << it.first << " " << it.second << " ";
    }
  cout << endl;
}

int main ()
{
  unsigned short n, temp;
  cin >> n;
  for (int i = 0; i < n; i++)
    {
      cin >> temp;
      phanTichNT (temp);
    }
  return 0;
}
