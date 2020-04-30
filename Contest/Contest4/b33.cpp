#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

ll n,k;
ll power(ll a , ll b){
    if(b == 1) return a%mod;
    ll tmp = power(a,b/2);
    tmp = tmp*tmp%mod;
    if( b % 2) return tmp*a%mod;
    return tmp;
}
ll cv(ll a){
    ll sum = 0;
    while(a!=0){
        sum = sum*10 + a%10;
        a/=10;
    }
    return sum;
}
  
void init(){
    cin >> n ;
    cout << power(n,cv(n)) << endl;
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