#include<bits/stdc++.h>

using namespace std;

long long lcm(long long a, long long b){
	return a*b/__gcd(a,b);
}

int main(){
	int n;
	cin >> n;
	while(n--){
		int a,b;
		cin >> a >> b;
		cout << __gcd(a,b) <<" "<<lcm(a,b)<<endl;
	}
	return 0;
}
