#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

int n,x;
vector<int> a;  
void init(){

    cin >> n >> x; a.resize(n);
    for(auto &z : a) cin >> z;

    int pos = lower_bound(a.begin(),a.end(),x) - a.begin();
    if( pos == n ){
        cout << a[pos] << endl;
        return;
    }
    if(a[pos] > x && pos == 0){
        cout << -1 << endl;
        return;
    }
    if( a[pos] == x ) cout << pos + 1;
    else cout << pos;
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