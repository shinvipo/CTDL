/*
    Note:	
*/

#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
typedef unsigned long long ull; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

int n,s;
vector < int > a;

void Init(){
    cin >> n >> s; a.resize(n+1);
    for(int i = 1 ; i <= n ; i++)
        cin >> a[i];
}
void Proc(){
    vector < int > f(s+1,0); 
    f[0] = 1;
    for(int i = 1 ; i <= n ; i++){
        for(int j = s ; j >= a[i] ; j--){
            if( !f[j] && f[j-a[i]] ) f[j] = 1;
        }
    }
    cout << ((f[s] == 1)?"YES":"NO") << '\n';
}

int main(){
    xxxxx
    int t=1, mul_test = 1		; if(mul_test) cin >> t;
    while(t--){
        Init();
        Proc();
    }
    return 0;
}

/* ==> Shin <== */