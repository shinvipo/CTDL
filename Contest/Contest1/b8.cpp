#include<bits/stdc++.h>

using namespace std;
int n, a[1000];

void out(){
	for(int i=1; i<= n; ++i)
		cout<< a[i];
		cout << " ";
}

bool check(){
	for(int i=1; i<= n; ++i)
		if(a[i] != i)	return false;
		return true;
}

void sinh(){
	int i=n-1;
	while( a[i]<a[i+1] ) i--;
	int k=n;
	while( a[i] < a[k] ) k--;
	swap( a[i], a[k] );
	int l=i+1, r=n;
	while( l<=r ){
		swap( a[l], a[r] );
		l++;
		r--;
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i=1; i<= n ; ++i){
			a[i] = n-i+1;
		}
		out();
		while(!check()){
			sinh();
			out();
		}
		cout << endl;
	}
	return 0;
}

