#include<bits/stdc++.h>

using namespace std;

bool check(long long a){
	long long bdau, kt;
	if(a < 10) return false;
	kt = a% 10;
	while(a!=0){
		bdau = a % 10;
		a /=10;
	}
	if(bdau == kt)	return true;
	return false;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long a;
		cin >> a;
		if(check(a))	cout << "YES"<<endl;
		else	cout <<"NO"<<endl;
	}
	return 0;
}
