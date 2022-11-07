#include<iostream> 
using namespace std;

long long UCLN(unsigned long a, unsigned long b)
{
    if (b==0)
        return a;
    else
        return UCLN(b,a%b);
}

long long BCNN(long long a, long long b)
{
    return (a*b)/UCLN(a,b);
}
int main () 
{
  
    unsigned short n;
  
    cin >> n;
  
    unsigned long a;
    long long temp = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        for (long long i = 2; i <= a; i++)
            temp = BCNN(temp,i);
        cout << temp << endl;
        temp = 1;
    } 
    return 0;
} 
 
