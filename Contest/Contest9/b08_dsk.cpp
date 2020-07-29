/*
    Note:	BFS
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
int vst[1005], s, edge[1001];
vector<int> ke[1005];
void Init(){
    cin >>  v >> e >> s;
    memset(vst,0,sizeof(vst));
    for(int i=1; i<= v; ++i)    ke[i].clear();
    for(int i=1; i<= e; ++i){
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        ke[tmp1].push_back(tmp2);
        ke[tmp2].push_back(tmp1);
    }
}

void BFS(int k){
    queue <int> q;
    q.push(k);
    vst[k] = 1;

    while(!q.empty()){
        int i = q.front();
        q.pop();
        cout << i <<" ";
        for(int j=0; j< ke[i].size(); ++j){
            int tmp = ke[i][j];
            if(vst[tmp] == 0){
                q.push(tmp);
                vst[tmp] = 1;
                edge[tmp] = i;
            }
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