#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

string s;
vector < int > x;
int n;
ll res = 0;

ll BS(ll sum){
    ll l = 0 , r = 1e6 + 5 , mid , ans = 0 ;
    while( l <= r){
        mid = l+ r >> 1;
        if( mid*mid*mid > sum) r = mid - 1;
        else{
            l = mid + 1;
            ans = max(ans,mid);
        }
    }
    return ans;
}
void update(){
    ll sum = 0;
    for(int i = 0 ; i < n ; i++){
        if( x[i] == 1) sum = sum*10 + (s[i]-'0');
    }
    ll z = BS(sum);
    if( z * z * z == sum ) res = max(res,sum);
}
void Try(int i){
    for(int j = 0 ; j <= 1 ; j++){
        x[i] = j;
        if( i == n - 1) update();
        else Try(i+1);
    }
}
void init(){
    cin >> s;
    n = s.length() , res = 0;
    x.resize(n);

    Try(0);
    cout << ((res == 0)?-1:res )<< '\n';
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