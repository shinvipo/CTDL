#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
vector<int> tmp;

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[1001];
		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
			tmp.push_back(a[i]);
		}
		int i = n;
		while (i != 0) {
			for (int j = 1; j < i; ++j) {
				a[j] = a[j] + a[j + 1];
				tmp.push_back(a[j]);
			}
			--i;
		}
		int k = tmp.size() - 1;
		i = 1;
		while (i != n + 1) {
			cout << '[';
			int h = k;
			for (int j = 1; j <= i; ++j) {
				if (j == i) {
					cout << tmp[h] << "] ";
					h++;
				}
				else {
					cout << tmp[h] << ' ';
					++h;
				}
			}
			++i;
			k -= i;
		}
	}
	return 0;
}

