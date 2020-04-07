#include<bits/stdc++.h>

using namespace std;

int a[1001], n;

void sinh(){
	int i=n-1;
	while( a[i]>a[i+1] ) i--;
	int k=n;
	while( a[i] > a[k] ) k--;
	swap( a[i], a[k] );
	int l=i+1, r=n;
	while( l<=r ){
		swap( a[l], a[r] );
		l++;
		r--;
	}
}

bool check(){
	for(int i=1; i<=n ;i++){
		if( a[i] != n-i+1 ) return false;
	}
	return true;
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i<= n; ++i)
			cin >> a[i];
		
		if(check()){
			for(int i=1; i<= n; ++i)
				cout << i <<" ";
			cout << endl;
		}	
		else{
			sinh();
			for(int i=1; i<=n; ++i)
				cout << a[i] <<" ";
			cout << endl;
		}	
	}


	return 0;
}

