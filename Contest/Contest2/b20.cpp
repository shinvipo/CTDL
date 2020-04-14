#include<bits/stdc++.h>
#define xxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long;

using namespace std;

int n, a[101];
vector<int> v;
void proc(int n){
	for(int i =n; i>0; --i)
		v.push_back(a[i]);
}

void Try(int n){
	if(n == 0)	return;
	proc(n);
	for(int i =1 ; i< n; ++i)
		a[i] = a[i] + a[i+1];
	Try(n-1);
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i<= n; ++i)	cin >> a[i];
		Try(n);
		int k = v.size() -1;
		for(int i = 1; i<= n; ++i){
			cout<<"[";
			for(int j = 0; j < i-1 ; ++j)
				cout << v[k--]<<" ";
			cout << v[k--] <<"] ";
		}
		cout << endl;
	}
	return 0;
}
