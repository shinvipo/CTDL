#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

int n;
vector<int> a;
   
void init(){
    cin >> n ; a.resize(n);
    for(auto &x : a) cin >> x;

    if(*max_element(a.begin(),a.end()) < 0){
        cout << *max_element(a.begin(),a.end()) << '\n';
        return;
    }
    ll res = 0,sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum += a[i];
        if( sum < 0) sum = 0;
        else res = max(res,sum);
    }
    cout << res << '\n';
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