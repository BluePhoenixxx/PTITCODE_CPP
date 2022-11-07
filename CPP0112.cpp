#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
using namespace std;

int
main ()
{
  unsigned short n;
  double a ,b,c,d;
  cin >> n;
  for (int i = 0; i < n; i++)
    {
      cin >> a >> b >> c >> d;
       cout << setprecision(4) << fixed<< sqrt(pow(a-c,2)+pow(b-d,2)) << endl;
    }
  return 0;
}
