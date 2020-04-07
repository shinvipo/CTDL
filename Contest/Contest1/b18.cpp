#include <iostream>
#include <algorithm>
using namespace std;
main (){
	long long n, s, a[100];
	cin >> n >> s;
	for (long long i = 0; i < n; i++){
		cin >> a[i];
	}
	sort (a, a + n);
	reverse (a, a + n);
	int dem = 0;
	for (long long i = 0; i < n; i++){
		if (s >= a[i]){
			dem ++;
			s -= a[i];
		}
	}
	if (s == 0) cout << dem;
	else cout << "-1";
}
