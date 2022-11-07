#include <iostream>
#include <map>
using namespace std;
int
main (){
  unsigned short t;
  cin >> t;
  while (t--)
    {
      unsigned int n, sum = 0;
      cin >> n;
      unsigned int a[n];
      map <unsigned int,unsigned int > map;
      for (int i = 0; i < n; i++)
	    {
	        cin >> a[i];
	        map[a[i]]++;
        } 
    for (auto &it : map)
    {
         if (it.second >1)
                sum+=it.second;
    }
      cout << sum << endl;
    }
}