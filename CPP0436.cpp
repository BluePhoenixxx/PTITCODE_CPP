#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int t; 
    cin >> t;
	while (t--) 
	{
		int n; 
		cin >> n;
		vector<int> m(n);
		
		int max = 0;
		for (int i = 0; i < n; i++) 
		{
			cin >> m[i];
			if (m[i] > max)
                max = m[i];
		}
		
		vector<int> z(max + 1);
		
		fill(z.begin(), z.end(), 0);

		for (int i = 0; i < n; i++) 
        {
			z[m[i]] ++;
		}

		for (int i = 0; i < n; i++) {
			if (m[i] == max)
                cout << "_ ";
			else
			for (int j = m[i] + 1; j <= max; j++) 
            {
				if (z[j] > 0) 
                {
					cout << j << " ";
					break;
				}
			}
		}
		cout << endl;
	}
}