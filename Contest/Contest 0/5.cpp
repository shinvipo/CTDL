#include<bits/stdc++.h>

using namespace std;
int main(){
	string s;
	getline(cin,s);
	int sum=0, tmp=0;
	for(int i=0; s[i]!= 0; ++i){
		if(s[i] >= '0' && s[i] <='9'){
			sum += s[i] -'0';	//cout << sum <<endl;
			tmp = s[i] -'0';
		}
	}
	if(sum - tmp == tmp)	cout <<"YES"<<endl;
	else cout <<"NO";
	return 0;
}
