#include<iostream>
#include<cmath>

using namespace std;

const long long m = 1e9 + 7;
long long a[1001];
int n, t;
void fibo()
{
	a[0] = 0;
	a[1] = 1;
	for (int i = 2; i <= 1000; i++) {
		a[i] = (a[i - 2] + a[i - 1]) % m;
	}
}


int main() {

	cin >> t;
	fibo();
	while (t--) {
		cin >> n;
		cout << a[n] << endl;
	}
	return 0;
}
