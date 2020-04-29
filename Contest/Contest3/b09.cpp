#include<bits/stdc++.h>
using namespace std;

struct act{
	int Deadl;
	int Profit;
};
bool kt(act x,act y){
	return x.Profit > y.Profit;
}
void solve(){
	int n;cin >> n;
	act a[1001];
	int b[1001];
	for(int i=0;i<=1001;i++) b[i]=1;
	for(int i=1;i<=n;i++){
		int t;
		cin >> t;
		cin >> a[t].Deadl >> a[t].Profit;
	}
	sort(a+1,a+n+1,kt);
	int Res = 0, Num=0;
	for(int i=1;i<=n;i++){
		int j = a[i].Deadl;
		while(b[j]==0&&j>1) j--;
		if(b[j]==1){
			Num++;
			Res+=a[i].Profit;
			b[j]=0;
		}
	}
	cout<< Num << " " << Res << endl;
}


int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}
}

