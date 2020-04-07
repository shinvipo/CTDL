#include<bits/stdc++.h>

using namespace std;

int main(){
	map<char,int> lama;
	lama['I'] =1;
	lama['V'] =5;
	lama['X'] =10;
	lama['L'] =50;
	lama['C'] =100;
	lama['D'] =500;
	lama['M'] =1000;
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string x; cin >> x;
		cin.ignore();
		int len = x.length();
		int k = lama[x[len -1]];// cout << k;
		for(int i= len -1; i>0; --i){
			if(lama[x[i]] > lama[x[i-1]])	k = k - lama[x[i-1]];
			else k = k + lama[x[i-1]];
		}
		cout << k<<endl;
	}
	return 0;
}
