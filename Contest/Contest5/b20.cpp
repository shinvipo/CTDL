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

int toNum(char S){
    return (S - '0');
}

void Proc(){
    string inp; cin >> inp;
    ull n = inp.size();

    vector<ull> dp (n+1,0);
    dp[0] = toNum(inp[0]);
    ull res = dp[0];

    for(ull i=1; i < n ; ++i){
        ull tmp = toNum(inp[i]);

        dp[i] = (i+1)*tmp + 10 * dp[i-1];

        res += dp[i];
    }

    cout << res <<endl;
    
}

int main(){
    xxxxx
    int t=1, mul_test = 1		; if(mul_test) cin >> t;
    while(t--){
        Proc();
    }
    return 0;
}

/* ==> Shin <== */