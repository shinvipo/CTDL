#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

ll n,k;
 
void init(){
    cin >> n >> k;
    ll i = 1;
    while( (k-i) % (i*2) != 0 ) i <<= 1;
    cout << log2(i) + 1 << endl;
 
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