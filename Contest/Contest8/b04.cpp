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

int k;
string s;

void Init(){
    cin >> k >> s;

    int cnt[26] = {0};
    for(int i = 0; i < s.length(); i++){
        cnt[s[i]-'A']++;
    }
    priority_queue<int,vector<int>> q;
    for(int i = 0; i < 26; i++)
        if(cnt[i] != 0) q.push(cnt[i]);
    while(k != 0 && !q.empty()){
        int x = q.top(); q.pop();
        if(x > 0) q.push(x-1);
        k--;
    }
    ll res = 0;
    while(!q.empty()){
        int x = q.top(); q.pop();
        
        res += 1LL*x*x;
    }
    cout << res << '\n';
}

void Proc(){}

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