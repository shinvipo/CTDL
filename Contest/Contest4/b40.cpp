#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

int n,res = 0;

void init(){
    cin >> n; res = 0;
    for(int i = 0 ; i < n ; i++){
        int x ; cin >> x;
        res += (x == 0);
    }
    cout << res << endl;
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