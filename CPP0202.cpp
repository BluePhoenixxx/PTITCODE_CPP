#include<iostream>
#include<algorithm>
using namespace std;
unsigned int kcNhoNhat(unsigned int a[],unsigned int n)
{
    sort (a, a + n);
    int min = a[1] - a[0];
    for (int i = 2; i < n; i++)
	{
	  if (a[i] - a[i - 1] < min)
	        min = a[i] - a[i-1];
	}
    return min;
}
int main ()
{
  unsigned short t;
  unsigned int n;
  cin >> t;
  while (t--)
    {
    cin >> n;
    unsigned int *a = new unsigned int[n];
    for (int i = 0; i < n; i++)
	{
	    cin >> a[i];
	}   
	cout << kcNhoNhat(a,n) << endl;
    delete a;
    }
}
