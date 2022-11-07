#include<bits/stdc++.h>
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

void uocNTLN(long long n)
{
    
    if (isNT(n))
    {
        cout << n << endl;
        return;
    }
  for (int i = 2; i <= sqrt (n); i++)
    {
      while (n % i == 0)
	        n /= i;
    if (n == 1)
	    cout << "" << i << endl;
    }
    if (n != 1)
        cout << "" << n << endl;
}

int main ()
{
  unsigned short n;
  cin >> n;
  unsigned  long a;
  while (n--)
    {
      cin >> a;
      uocNTLN(a);
    }
}

