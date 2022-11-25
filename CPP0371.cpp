#include<bits/stdc++.h> 
using namespace std;
bool check (char x)
{
  return (x == 'u' || x == 'e' || x == 'o' || x == 'a' || x == 'i' || x == 'y');
}

int main ()
{
  string s;
  cin >> s;
  vector < char >v;
    for (char x: s)
    {
      v.push_back (tolower (x));
    } vector < char >res;
for (char x:v)
    {
      if (!check (x))
	{
	  res.push_back (x);
	}
    }
  cout << ".";
  for (int i = 0; i < res.size () - 1; i++)
    {
      cout << res[i] << ".";
    } cout << res[res.size () - 1];
} 
 
