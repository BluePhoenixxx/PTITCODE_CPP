#include <bits/stdc++.h>
using namespace std;
int
main ()
{
  string s;
  getline (cin, s);
  for (int i = 0; i < s.length (); i++)
    {
      s[i] = tolower (s[i]);
    } stringstream ss (s);
  string tmp;
  vector < string > v;
  while (ss >> tmp)
    {
      v.push_back (tmp);
    }
  int l = v.size ();
  cout << v[l - 1];
  for (int i = 0; i < l - 1; i++)
    {
      cout << v[i][0];
    } cout << "@ptit.edu.vn";
}
