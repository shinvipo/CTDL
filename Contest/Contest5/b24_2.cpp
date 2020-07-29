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

ll dp[100][100]; 
int n,m;
void Init(){
    cin >> n >> m;
}
void Proc(){
    memset(dp,0,sizeof(dp));
    for(int i = 1 ; i <= n + 1; i++){
        for(int j = 1 ; j <= m + 1 ; j++){
            if( i == 1 || j == 1) dp[i][j] = 1;
            else dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }
    cout << dp[n+1][m+1] << endl;
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