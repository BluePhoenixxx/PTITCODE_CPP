#include<iostream>
#include<math.h>
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
int main()
{   
    long long n; 
    cin>>n; 
    if( isNT(n) == 0 ) 
        cout<<"NO";
    else cout<<"YES"; 
    return 0;
}