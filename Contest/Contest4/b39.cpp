#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

int n;
vector<int> a,b; 
void init(){

    cin >> n ; a.resize(n); b.resize(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    for(int i = 0 ; i < n - 1; i++) cin >> b[i];

    for(int i = 0 ; i < n - 1; i++){
        if( a[i] != b[i] ){
            cout << i + 1 << endl;
            return;
        }
    }
    cout << n << endl;
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