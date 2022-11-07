#include<iostream> 
using namespace std;

void rutGon(unsigned long n) 
{
    unsigned char sum = 0;
  
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    int h = sum;
    if (h % 10 != h)
        return rutGon(h);
  
  else
    cout << h << endl;

}


int main () 
{
  
    unsigned short n;
  
    cin >> n;
  
    unsigned long temp;
  
    for (int i = 0; i < n; i++)
    
        {
        cin >> temp;
        rutGon(temp);
        } 
    return 0;
} 
 
