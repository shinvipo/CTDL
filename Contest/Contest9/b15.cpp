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

int v, e, vst[1005];

vector<int> ke[10005];

void DFS(int i){
    vst[i] = 1;
    for(int j=0; j< ke[i].size(); ++j){
        int tmp = ke[i][j];
        if(vst[tmp] == 0)
            DFS(tmp);
    }
}

void Init(){
    cin >> v >> e;
    for(int i=0; i<= v; ++i)    vst[i] = 0;
    for(int i=0; i<= v; ++i)    ke[i].clear();
    for(int i=1; i<= e; ++i){
        int a, b; cin >> a >> b;
        ke[a].push_back(b);
        ke[b].push_back(a);
    }
    int cnt = 0;
    for(int i=1; i<= v; ++i){
        if(vst[i] == 0){
            DFS(i);
            ++cnt;
        }
    }
    cout << cnt << endl;
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