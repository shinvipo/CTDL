#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

void init(){
    ll p,q;
    cin >> p >> q;
    ll x = __gcd(p,q);
    p /= x;
    q /= x;
    if(p == 1)  cout << "1/" << q;
    else{
        while (p!=1)
        {
            ll d = q/p;
            cout << "1/" << d+1 <<" + ";
            p = p *(d + 1) -q;
            q = q * (d + 1);
            ll k = __gcd(p,q);
            p/=k;q/=k;
        }
        cout <<"1/"<<q;
    }
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