#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

vector<int> a,b;
int n,m;

void init(){

    cin >> n >> m;
    a.resize(n) ; b.resize(m);
    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;

    map < int , ll > res;
    for(int i = 0 ; i < n ; i++){
        for(int  j = 0 ; j < m ; j++){
            res[i+j] += 1ll*a[i]*b[j];
        }
    }
    for(auto z : res) cout << z.second << ' ';
    cout << endl;
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