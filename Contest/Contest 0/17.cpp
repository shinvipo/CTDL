#include<bits/stdc++.h>

using namespace std;

int a[2],b[2],c[2];

void inp(int a[]){
	for(int i=0; i<2; ++i)	cin >> a[i];
}

int res(){
	int sum1,sum2;
	for(int i=0; i< 2; ++i)
		for(int j = 0; j <2 ; ++j){
			sum1 = a[i] + b[j] + c[j]; cout << sum1<<endl;
			sum2 = a[1-i]+b[1-j] + c[1-j]; cout << sum2 <<endl;
			if(sum1 == sum2){
				cout <<"YES"<<endl;
				return 0;
			}
		}
	cout <<"NO"<<endl;
	return 0;
}

int main(){
	inp(a);
	inp(b);
	inp(c);
	res();
	return 0;
}
