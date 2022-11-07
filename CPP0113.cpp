#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
using namespace std;

int
main ()
{
  unsigned short n;
  int temp;
  cin >> n;
  for (int i = 0; i < n; i++)
    {
      cin >> temp;
      cout << ((temp % 100 == 86) ? "1" : "0") << endl;
    }
  return 0;
}
