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

int main ()
{
  unsigned int n;
  unsigned short t;
  cin >> t;
  while (t--)
    {
     cin >> n;
     if (n>=4)
         cout << "4" << " ";
     for (int i = 3; i <= sqrt(n); i+=2)
	    {
	  if (isNT(i) == 1)
	    cout << i * i << " ";
        }
      cout << endl;
    }
  return 0;
}
