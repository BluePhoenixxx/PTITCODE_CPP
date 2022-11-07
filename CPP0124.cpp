#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
#include <map>
using namespace std;
bool isNT(long long n)
{
    for(int i =2; i <=sqrt(n); i++)
    { 
            if( n% i ==0) 
            return false; 
    } 
    return n>1; 
} 

void phanTichNT (unsigned long n)
{
    if (isNT(n)) 
    {
    cout << n << " "<< "1";
    return;
    }    
  map <int,int>m;
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
      cout << it.first << " " << it.second << " " << endl;
    }
  cout << endl;
}

int main ()
{
  unsigned long n;
  cin >> n;
  phanTichNT(n);
  return 0;
}
