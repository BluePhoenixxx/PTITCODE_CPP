#include<iostream>
using namespace std;
int main ()
{
  unsigned int d, n, t;
  cin >> t;
  while (t--)
  {
    {
      cin >> n >> d;
    }  
    unsigned int *a = new unsigned int[n];
    for (int i = 0; i < n; i++)
	  cin >> a[i];
    for (int j = d; j < n; j++)
	  cout << a[j] << " ";
    for (int k = 0; k < d; k++)
	  cout << a[k] << " ";
	cout << endl;
    delete a;
  }	
    return 0;
}
