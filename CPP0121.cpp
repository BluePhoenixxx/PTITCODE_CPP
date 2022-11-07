#include<iostream> 
using namespace std;

unsigned long UCLN(unsigned long a, unsigned long b)
{
    if (b==0)
        return a;
    else
        return UCLN(b,a%b);
}

unsigned long BCNN(unsigned long a, unsigned long b)
{
    return (a*b)/UCLN(a,b);
}
int main () 
{
  
    unsigned short n;
  
    cin >> n;
  
    unsigned long a,b;
  
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        cout << BCNN(a,b) << " "  << UCLN(a,b) << endl ;
    } 
    return 0;
} 
 
