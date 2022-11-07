#include<iostream>
#include<math.h>
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

void capSoNT(unsigned short n)
{
    for (int i=0; i<=n;i++)
    {
        if ((isNT(n-i)) && (isNT(i)))
        {
            cout << i << " " << n-i << endl ;
            return;
        }
    }
}

int main ()
{
  unsigned int n;
  unsigned short t;
  cin >> t;
  while (t--)
    {
     cin >> n;
     capSoNT(n);
    }
  return 0;
}
