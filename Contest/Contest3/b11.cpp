#include<bits/stdc++.h>
#include<iostream>
#define xxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long 

using namespace std;

const ll MAX = 1E7 + 5;
const ll mod = 1e9 + 7;
ll a[MAX] , n;

void init(){
    cin >> n;
    priority_queue < ll, vector<ll>, greater<ll> > q;
    for(ll i=1; i<= n; ++i){
        cin >> a[i];
        q.push(a[i]);
    }

    ll res = 0;

    while (q.size() >1)
    {
        ll tmp1 = q.top();
        q.pop();
        ll tmp2 = q.top();
        q.pop();
        ll tmp3 = (tmp1 +tmp2)%mod;

        res = (res + tmp3)%mod;
        q.push(tmp3);
    }

    cout << res <<endl;
    
}

int main(){
   xxx;
    init();

    return 0;
}

//copy by shincrab