#include<iostream>
#include<vector>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> V(n);

		for (int i = 0; i < n; i++)
            cin >> V[i];
		int add = 0;
        int max = 0;
		for (int i = 0; i < n; i++) 
        {
			int mul = 0;
			while (V[i]) 
            {
				if (V[i] % 2 == 0) 
                {
					V[i] /= 2; 
                    mul++;
				}
				else 
                {
					V[i] -= 1; 
                    add++;
				}
			}
			if (max < mul)
                max = mul;
		}
		cout << max + add << endl;
	}

}