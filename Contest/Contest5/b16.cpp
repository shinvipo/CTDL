/*
    Note:	TỔNG LỚN NHẤT CỦA DÃY CON TĂNG DẦN
*/

#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
typedef unsigned long long ull; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;
int n;
vector<ll> a;
void Init(){
    cin >> n;
    a.resize(n);
    for(auto &i : a)    cin >> i;
    vector<ll> dp (n+1, a[0]);
    ll res = a[0];
    for(int i=1; i< n; ++i ){
        dp[i] = a[i];
        for(int j=0; j<i; ++j)
            if(a[i] > a[j] && dp[i] < dp[j] + a[i]){
                dp[i] = dp[j] + a[i];
                if(res < dp[i])
                    res = dp[i];
            }
    }
    cout << res <<endl;
}
void Proc(){}

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