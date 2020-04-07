#include<bits/stdc++.h>
using namespace std;

// sinh to hop
int n, k, a[1000006];

void khoitao();
void display();
void sinh();
bool check();

int main ()
{
	int t; cin >> t;
	while(t--){
		cin>>n>>k;
		khoitao();
		while( check()==false ){
		display();
		sinh();
	}
	display();
		cout << endl;
	}
}

void khoitao(){
	for(int i=1; i<=k; i++){
		a[i]=i;
	}
}

void display(){
	for(int i=1; i<=k; i++){
		cout<<a[i];
	}
	cout<<" ";
}

void sinh(){
	int i=k;
	while( a[i]==n-k+i) i--;
	a[i]++;
	for(int j=i+1; j<=k ;j++){
		a[j]=a[j-1]+1;
	}
}
bool check(){
	for(int i=1; i<=k ;i++){
		if( a[i] != n-k+i ){
			return false;
		}
	}
	return true;
}
