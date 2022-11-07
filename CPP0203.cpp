#include<iostream>
using namespace std;
void soNhoNhat()
{
    
}
int main ()
{
  unsigned short t;
  unsigned int n; 
  cin >> t;
  while (t--)
    {
      cin >> n;
      int *a = new int[n];
      for (int i = 0; i < n; i++)
      {
	     cin >> a[i];
	   //  if (a[i]<=0)
	   //  {
	   //  cin >> a[i];
	   //  n--;    
	   //  }
      }
	unsigned short k = 1;
    while (true)
	{
	  unsigned short end = 1;
	  for (int i = 0; i < n; i++)
	    {
	      if (a[i] == k)
    		{
		    end = 0;
		    break;
		    }
	    }
	  if (end != 1)
	        k++;
	  else
	  {
	    cout << k ;
	    break;
	  }
	}
      cout << endl;
      delete a;
    }
  return 0;
}
