#include<bits/stdc++.h>
using namespace std;
int n , k;
long long p = pow(10,9) + 7;
int res(int i){
	if(i == 1) return 1;
	if(i == 2) return 2;
	else{
		int x = 0;
		for(int j = 1 ; j <= k ; j++){
			x = (x + res(i-j) ) % p;
		}
		return x;
	}
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n >> k;
		cout << res(n) << endl;
	}
}