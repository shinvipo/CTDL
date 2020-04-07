#include<bits/stdc++.h>

using namespace std;
char a[1000];
int n,k; 

bool check(){
	for(int i=1; i<= n; ++i){
		if(a[i] != 'B')	return false;
	}
	return true;
}

void sinh(){
	for(int i=n; i>0; --i){
		if(a[i] == 'A'){
			a[i] = 'B';
			for(int j=i+1; j<= n; ++j)
				a[j] = 'A';
				break;
		}
	}
}

void out(){
	for(int i=1; i<= n; ++i)
		cout<< a[i];
	cout<<" ";
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i=1; i<= n; ++i)
			a[i]='A';
		out();
		while(check() == false){
			sinh();
			out();
		}
		cout<< endl;
	}
	return 0;
}

