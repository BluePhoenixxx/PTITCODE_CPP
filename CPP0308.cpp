#include <iostream>
#include <map>
#include <string>
using namespace std;
int
main ()
{
  unsigned short t;
  cin >> t;
  string s;
  while (t--)
    {
      cin >> s;
      map <char , int > map;
      for (int i = 0; i < s.size(); i++)
	        map[s[i]]++;
      
        for (int i = 0; i < s.size(); i++)
	        if (map[s[i]] ==1 )
	            cout << s[i];
	   cout << endl;
    }    
    return 0;
}
