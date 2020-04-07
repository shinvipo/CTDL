#include <bits/stdc++.h>

using namespace std;

int n, s;
int a[33];

int main() {
	cin >> n >> s;
	for(int i = 1; i <= n; ++i) cin >> a[i];
	sort(a + 1, a + n + 1);
	int res = 0, cnt = n;
	while(s && cnt) {
		int ans = s / a[cnt];
		res += ans;
		s -= ans * a[cnt];
		cnt--;
	}
	cout << res;
}
