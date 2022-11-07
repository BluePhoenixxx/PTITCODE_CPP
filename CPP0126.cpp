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

void lietKeNT(unsigned int a, unsigned int b)
{
  for (int i = a; i <= b; i++)
    {
      if (isNT(i))
	    cout << i << " ";
    }
    cout << endl;
}
int main (){
  unsigned short n;
  cin >> n;
  unsigned short a, b;
  for (int i = 0; i<n; i++)
  {
      cin >> a >> b;
      lietKeNT(a,b);
  }
  return 0;
}