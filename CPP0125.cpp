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
  if (a > b)
    swap(a,b);
  for (int i = a; i <= b; i++)
    {
      if (isNT(i))
	    cout << i << " ";
    }
}
int main (){
  unsigned int a, b;
  cin >> a >> b;
  lietKeNT(a,b);
  return 0;
}
