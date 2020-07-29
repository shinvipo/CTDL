#include<bits/stdc++.h>
using namespace std;
// sinh hoan vi
int n,a[100000];
void khoitao();
void display();
void sinh();
bool check();

int main ()
{
	int t; cin >> t;
	while(t--){
		cin>>n;
		khoitao();
		while( check()==false ){
			display();
			sinh();
		}
		display();
		cout << endl;
	}
	return 0;
}
void khoitao(){
	for(int i=1; i<=n ;i++) a[i]=i;
}
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
void display(){
	for(int i=1; i<=n ;i++){
		cout<<a[i]<< " ";
	}
	cout<<endl;
	
}
