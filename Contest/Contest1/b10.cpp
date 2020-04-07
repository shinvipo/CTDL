#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string bin; cin >> bin;
		int gray[100];
		int n= bin.length();
		gray[0] = bin[0] -'0';
		cout<<gray[0];
		for(int i=1; i< n; ++i){
			gray[i]= (bin[i] -'0') + bin[i-1] - '0';
			if(gray[i] == 2)	gray[i] = 0;
			cout<<gray[i];
		}
		cout<< endl;
	}
	return 0;
}

