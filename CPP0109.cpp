#include <iostream> 
#include <math.h> 
using namespace std; 
bool isChanLe(int n)
{ 
    char check = 0; 
    while( n>0 )
    { 
        unsigned char temp = n%10 ; 
        if ( temp%2 == 0 ) 
            check++; 
        else 
            check--; 
        n/=10; 
        
    } 
    return (!check);
} 
int main() 
{ 
    unsigned short n;
    unsigned char dem = 0 ; 
    cin >> n ; 
    unsigned short a[] = {0, 1 , 11 , 111};
    unsigned int begin =  a[n/2-1]+ pow(10,n-1);
    unsigned int end = pow(10,n) - a[n/2] - 1;
    
    for(int i=begin ;  i<=end; i++)
    { 
        if(isChanLe(i))
        { 
            cout << i <<" "; 
            dem ++; 
            if( dem==10)
            { 
                cout<<endl;  
                 dem=0; 
            } 
        } 
    } 
    return 0; 
}