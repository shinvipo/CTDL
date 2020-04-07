#include<bits/stdc++.h>

using namespace std;

int a[40],n,k, b[40];

void sinh(){
	int i = k;
	while(a[i] == n-k +i)
		--i;
	++a[i];
	for(int j=i+1; j<=k; ++j)
		a[j]= a[j-1]+1;
}

bool check(){
	for(int i= k; i>0; --i)
		if(a[i] != n - k +i)	return false;
	return true;
}

int res(){
	if(check())	return k;
	sinh();
	int dem = 0;
	for(int i =1 ; i<= k ; ++i){
		int kt =0;
		for(int j =0; j<= k ; ++j)
			if(a[i] == b[j]) kt =1;
		if(kt==0)	dem++;
	}
	return dem;
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i=1; i<= k; ++i){
				cin >> a[i];
				b[i] = a[i];
		}
		cout << res()<<endl;
	}
	return 0;
}
