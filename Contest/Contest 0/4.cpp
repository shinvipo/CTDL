#include<bits/stdc++.h>

using namespace std;

bool snt(int a){
	if(a < 2) return false;
	if( a==2 || a== 3) return true;
	for(int i=0; i<= sqrt(a); ++i)
		if(a%i==0) return false;
	return true;
}

int main(){
	int n; cin >> n;
	for(int i=1; i<= n; ++i){
		int a; cin >> a;

		cout <<"Test "<<i<<": ";
		
		int dem=0;
		for(int j=2;j<=a; ++j){
			dem =0;
			while(a%j==0){
				dem++;
				a/=j;
			}
		if(dem != 0)	cout <<j<<"("<<dem<<") ";
		}
		cout <<endl;
	}
}
