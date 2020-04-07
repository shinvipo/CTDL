#include<bits/stdc++.h>

using namespace std;
char a[1000];
int n,k,dem=0;
string in;
bool check(){
	for(int i=1; i<= n; ++i){
		if(a[i] != 'B')	return false;
	}
	return true;
}

bool check2(){
	int dem1 = 0;	// dem so kytu A lien tiep
	int dem2 = 0;	// dem so xau A lien tiep
	for(int i=1; i<= n; ++i){
		dem1=0;
		if(a[i] == 'A'){
			dem1=1;
			while(i<=n){
				i++;
				if(a[i] == 'A')	dem1++;
				else if(a[i] == 'B')	break;
			}
			if(dem1 == k)	dem2++;
		}
	}
	if(dem2 != 1)	return false;
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

void pre_out(){
	if(check2()){
		dem+=1;
		for(int i=1; i<= n; ++i)
			in = in + a[i];
	}
}

void out(){
	cout << dem<<endl;
	int c=0;
	int i=0;
	while(in[i] != 0){
		cout << in[i];
		c++;
		i++;
		if(c % n == 0)
			cout << endl;
	}
}

int main(){
//	int t; cin >> t;
//	while(t--){
		cin >> n >> k;
		for(int i=1; i<= n; ++i)
			a[i]='A';
//		out();
		while(check() == false){
			sinh();
			pre_out();
		}
		out();
//		cout << dem <<endl;
//		cout << in;
//		cout<< endl;
//	}
	return 0;
}

