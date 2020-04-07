#include<bits/stdc++.h>
using namespace std;

bool check(string a){
	if(a[0] > a[1]){
		for(int i=2; a[i] != 0;++i){
			if(a[i] > a[i-1]) return false;
		}
		return true;
	}
	else if(a[0] < a[1])
		for(int i=2; a[i] != 0;++i){
			if(a[i] < a[i-1]) return false;
		}
		return true;
		
}
int main(){
	int t; cin >> t;
	while(t--){
		string a; cin >> a;
		if(check(a))	cout <<"YES"<<endl;
		else cout <<"NO"<<endl;
	}
	return 0;
}
