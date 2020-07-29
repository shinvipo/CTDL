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

ll n,x,y,z;
ll dp[1000];

void Init(){}

void Proc(){
    cin >> n >> x >> y >> z;
    if(n == 1){
        cout << x << '\n';
    }else{
        memset(dp,0,sizeof(dp));
        dp[1] = x; 
        for(int i = 2 ; i <= n ; i++){
            if (i % 2 == 0) 
                dp[i] = min(dp[i-1] + x, dp[i/2] + z); 
            else 
                dp[i] = min(dp[i-1] + x, dp[(i+1)/2] + y + z);
            //cout << dp[i] << ' ';  
        }
        cout << dp[n] << '\n';
    }
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