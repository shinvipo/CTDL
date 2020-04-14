#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;
int n, cp, a[100][100], x[100], Cmin=N, g=N, daxet[100], kq;

void init(){
	cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n;j++){
			cin>>a[i][j];
			if(Cmin>a[i][j] && a[i][j]!=0) Cmin=a[i][j];	
		}
	}	
	x[1]=1;
}

void nhanhCan(int k){
	for(int i=2; i<=n; i++){
		if(!daxet[i]){
			x[k]=i;
			daxet[i]++;
			cp += a[x[k-1]][x[k]];
			int gk=cp+(n-k+1)*Cmin;
			if(k==n && gk < g){
				g=gk;
				kq=cp+a[x[k]][x[1]];
			}
			else if (gk < g) nhanhCan(k+1);
			daxet[i]--;
			cp-= a[x[k-1]][x[k]];
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	init();
	nhanhCan(2);
	cout<<kq;
}