#include<vector>
#include<iostream>
using namespace std;

int a[10005], b[1000];
int n, sum, dem = 0;
vector <int> result;
void sinh() {
	int i = n - 1;
	while (a[i] > a[i + 1]) i--;
	int k = n;
	while (a[i] > a[k]) k--;
	swap(a[i], a[k]);
	int l = i + 1, r = n;
	while (l <= r) {
		swap(a[l], a[r]);
		l++;
		r--;
	}
}

bool check() {
	for (int i = 1; i <= n; i++) {
		if (a[i] != n - i + 1) return false;
	}
	return true;
}


bool check1() {
	int tmp = 0;
	for (int i = 1; i <= n; ++i) {
		tmp = tmp + b[n * i + a[i] - n];
	}
	if (tmp == sum) 
		return true;
	return false;
}

void res() {
	if (check1()) {
		dem++;
		for (int i = 1; i <= n; ++i)
			result.push_back(a[i]);
	}
}

int main() {
	//	int t; cin >> t;
	//	while(t--){}
	cin >> n >> sum;
	for (int i = 1; i <= n * n; ++i)	cin >> b[i];
	for (int i = 1; i <= n; ++i)	a[i] = i;
	while (!check()) {
		sinh();
		res();
	}
	cout << dem << endl;
		for(int i=0; i< result.size(); ++i){
			cout << result[i] <<" ";
			if ((i + 1) % n == 0)	cout << endl;
		}
	return 0;
}

