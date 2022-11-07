#include <iostream>
#include <math.h>
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


void phanTichNT(unsigned long n){
    if (isNT(n))
    {
        cout << n << endl;
        return;
    }
  for (int i = 2; i <= sqrt (n); i++)
    {
      while (n % i == 0)
	{
	  cout << i << " ";
	  n /= i;
	}
    }
  if (n != 1)
    cout << n;
  cout << endl;
}

int main ()
{
    unsigned short n;
    unsigned long a;
    cin >> n;
    while (n--)
    {
        cin >> a;
        phanTichNT(a);
    }
}
