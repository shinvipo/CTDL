#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

ll n;
const int MOD = 123456789;
ll pow2(ll a, ll b, ll m) {
    ll r = 1;
    while (b) {if (b & 1) r = (r % m) * a % m; a %= m; a = a * a % m; b >>= 1;} 
    return r;
}

void init(){
    cin >> n;
    cout << pow2(2, n - 1, MOD) << endl;
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