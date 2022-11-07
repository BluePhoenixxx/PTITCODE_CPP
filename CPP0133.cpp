#include <iostream>
#include <math.h>
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


void lietKeNT(unsigned long n){
    cout << "2"  << " ";
    for (int i = 3; i <= n; i+=2 )
    {
        if (isNT(i))
        cout << i << " ";
    }
    cout << endl;
}

int main ()
{
    unsigned short n;
    unsigned long a;
    cin >> n;
    while (n--)
    {
        cin >> a;
        lietKeNT(a);
    }
}
