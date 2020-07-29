/*
	Note:	
*/

#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
typedef unsigned long long ull; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

int n,s;
vector<int> a,b;
void Init(){
    cin >> n >> s; 
    a.resize(n+1) , b.resize(n+1);
    for(int i = 1 ; i <= n ; i++) cin >> a[i];
    for(int i = 1 ; i <= n ; i++) cin >> b[i];
}
void Proc(){
    vector < vector<int> > dp(n+1,vector<int>(s+1,0));
    for(int i = 0 ; i <= n ; i++){
        for(int j = 0 ; j <= s ; j++){
            if( i == 0 || j == 0) dp[i][j] = 0;
            else if( j < a[i]) dp[i][j] = dp[i-1][j];
            else dp[i][j] = max(dp[i-1][j],b[i] + dp[i-1][j-a[i]]);
        }
    }
    cout << dp[n][s] << '\n';
}

int main(){
	xxxxx
	int t=1, mul_test = 1		; if(mul_test) cin >> t;
	while(t--){
		Init();
		Proc();
	}
	return 0;
}

/* ==> Shin <== */