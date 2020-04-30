#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;


ll power(ll a , ll b){
    if(b == 1) return a%mod;
    ll tmp = power(a,b/2);
    tmp = tmp*tmp%mod;
    if( b % 2) return tmp*a%mod;
    return tmp;
}

void init(){
    ll n,k;
    cin >> n >> k;
    cout << power(n,k) << endl;
}

int main(){
    xxxxx
    int t; cin >> t;
    while(t--){
        init();

    }
    return 0;
}

//copy by shincrab