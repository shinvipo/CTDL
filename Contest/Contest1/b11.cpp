#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string gray; 	cin >> gray;
		int bin[100];
		int n= gray.length();
		bin[0] = gray[0] - '0';	cout << bin[0];
		for(int i=1; i< n; ++i){
			bin[i]= gray[i] - '0' + bin[i-1];
			if(bin[i] == 2)	bin[i] =0;
			cout << bin[i];
		}
		cout<<endl;
	}
	return 0;
}

