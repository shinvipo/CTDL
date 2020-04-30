#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

int n,k;
vector<int> a;

void init(){
    cin >> n >> k;
    a.resize(n);
    for(auto &x : a) cin >> x;

    int l = 0 , r = n - 1, mid;
    while( l <= r){
        mid = l+r >> 1;
        if(a[mid] == k){
            cout << mid + 1<< endl;
            return;
        }
        else if ( a[mid] > k) r = mid - 1;
        else l = mid + 1;
    }
    cout << "NO" << endl;
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