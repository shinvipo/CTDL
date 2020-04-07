#include <bits/stdc++.h>
 
using namespace std;
 
int a[1003];
 
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		for(int i = 1; i <= k; ++i) cin >> a[i];
		bool ok = true;
		for(int i = k, j = 0; i >= 1; --i) {
			if(a[i] != n - j) {
				ok = false;
				a[i]++;
				for(int z = i + 1; z <= k; ++z) a[z] = a[z - 1] + 1;
				break;
			}
			++j;
		}
		if(ok) {
			for(int i = 1; i <= k; ++i) cout << i << ' ';
			cout << '\n';
			continue;
		}
		for(int i = 1; i <= k; ++i) cout << a[i] << ' ';
		cout << '\n';
	}
}
