#include<bits/stdc++.h>
using namespace std;
bool isNT(unsigned int  n)
{
    bool check = false;
    for(int i =2; i <=sqrt(n); i++)
    { 
            if( n% i ==0) 
            return false; 
    } 
    return n>1; 
} 

void capSoNT(unsigned int n)
{
    
    if (n % 2 == 1)
	 {
	   if (isNT(n - 2))
	      cout << "2" << " " << n - 2 << endl;
	  else
	      cout << "-1" << endl;
	}
     else
	
	{
	  for (int i = 2; i <= n / 2; i++)
	    {
	      if (isNT(i) && isNT(n-i))
		    {
		        cout << i << " " << n - i <<  endl;
		        return;
		    }
	    }
	  cout << "-1" << endl;
    }
}
int main ()
{
  unsigned short n;
  cin >> n;
  unsigned int a;
  for (int i = 0; i<n ; i++)
  {
      cin >> a;
      capSoNT(a);
  }
}
