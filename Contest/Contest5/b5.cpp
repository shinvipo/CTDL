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

void Init(){}

void Proc(){

    int n, m; 
    cin >> n >> m;
    vector<int> a(n);
    for (int &x: a) {
       cin >> x;
       x %= m;
    }
    vector<int> f(m, INT_MIN), g(m);
    f[0] = 0;
    for (int x: a) {
        for (int i=0; i<m; i++) {
            g[i] = max(f[i], f[(i-x+m) % m] + 1);
        }
        f.swap(g);
    }

    cout << f[0] << endl;
}

int main(){
    xxxxx
    int t=1, mul_test = 0		; if(mul_test) cin >> t;
    while(t--){
        Init();
        Proc();
    }
    return 0;
}

/* ==> Shin <== */