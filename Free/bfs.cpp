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

int v, e, a[1005][1005];
int vst[1005], s;

void Init(){
    cin >>  v >> e >> s;
    for(int i=0; i<= v; ++i)
        for(int j=0; j<= v; ++j)
            a[i][j] = 0;

    for(int i=0; i<=v; ++i)    vst[i] =0;

    for(int i=1; i<= e; ++i){
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        a[tmp1][tmp2] = 1;
        a[tmp2][tmp1] = 1;
    }
    
}

void BFS(int k){
    queue <int> q;
    q.push(k);
    vst[k] = 1;

    while(!q.empty()){
        int i= q.front();
        q.pop();
        cout << i << " ";
        for(int j= 1; j <= v; ++j)
            if(a[i][j] == 1 && vst[j] == 0 ){
                q.push(j);
                vst[j] = 1;
            }
    }
}

int main(){
    xxxxx
    int t=1, mul_test = 1		; if(mul_test) cin >> t;
    while(t--){
        Init();
        BFS(s);
        cout << endl;
    }
    return 0;
}

/* ==> Shin <== */