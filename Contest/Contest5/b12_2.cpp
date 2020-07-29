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

ll n,k;
void Init(){
    cin >> n >> k;
    if( n < k){
        cout << 0 << endl;
        return;
    }
    ll res = 1;
    for(int i = n - k + 1 ; i <= n ; i++)
        res = res*i%mod;
    cout << res << endl;
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