#include<bits/stdc++.h>

using namespace std;
int a[1000];
int n,k; 

bool check(){
	for(int i=1; i<= n; ++i){
		if(a[i] != 1)	return false;
	}
	return true;
}

bool check2(){
	int dem = 0;
	for(int i = 1; i<= n; ++i)
		if(a[i] == 1)	dem+=1;
	if(dem == k)	return true;
	return false;
}

void sinh(){
	for(int i=n; i>0; --i){
		if(a[i] == 0){
			a[i] = 1;
			for(int j=i+1; j<= n; ++j)
				a[j] = 0;
				break;
		}
	}
}

void out(){
	if(check2()){
		for(int i=1; i<= n; ++i)
			cout<< a[i];
		cout<<endl;
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i=1; i<= n; ++i)
			a[i]=0;
		out();
		while(check() == false){
			sinh();
			out();
		}
//		cout<< endl;
	}
	return 0;
}

