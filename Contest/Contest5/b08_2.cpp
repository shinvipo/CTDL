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

int a[501][501] , dp[501][501];
int n,m;

void Init(){
    cin >> n >> m ; 
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j ++){
            cin >> a[i][j];
            if(i == 0 || j == 0) dp[i][j] = a[i][j];
        }
    }
}

void Proc(){
    int res = 0;
    for(int i = 1 ; i < n ; i++){
        for(int j = 1; j < m ; j++){
            if(a[i][j] == 1)
                dp[i][j] = min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1])) + 1;
            else dp[i][j] = 0;
            res = max(res,dp[i][j]);
        }
    }
    cout << res << endl ;
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