#include<iostream>
#include <math.h>
using namespace std;
bool isNT(unsigned long n)
{
    for(int i =2; i <= sqrt(n); i++)
    { 
            if( n% i ==0) 
            return false; 
    } 
    return n>1; 
}
void uocNTthuK(unsigned short n, unsigned short k)
{
    unsigned short dem = 0, i = 2;
    if ((isNT(n)))
    {
        if (k==1)
        {
            cout << n << endl;
            return;
        } else 
        {
            cout << -1 << endl;
            return;
        }
    }
    while (n != 1)
	{
	  if (n % i == 0)
	    {
	      dem++;
	      if (dem == k)
		  cout << i << endl;
	      else
		    n = n / i;
	    }
	  else
	      i++;
	}
      if (k > dem)
	{
	  cout << "-1" << endl;
	}
}
int main ()
{
  unsigned short n,t,k;
  cin >> t;
  while (t--)
    {
      cin >> n >> k;
      uocNTthuK(n,k);
    }
}     
