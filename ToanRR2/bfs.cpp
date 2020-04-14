#include<bits/stdc++.h>
#include<iostream>
#define xxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int v, e , graph[1005][1005], vst[1005] , s;

void init(){
    cin >> v >> e >> s;
    for(int i = 1; i <= v; ++i)
        for(int j = 1; j <= v; ++j)
            graph[i][j] = 0;

    for(int i = 1; i<= v; ++i)  vst[i] = 0;
    
    for(int i=1; i<= e; ++i){
        int tmp1, tmp2; cin >> tmp1 >> tmp2;
        graph[tmp1][tmp2] = 1;
        graph[tmp2][tmp1] = 1;
    }
}

void BFS(int i){
    queue<int>  q;
    q.push(i);
    vst[i] = 1;

    while(!q.empty()){
        int u = q.front();
        q.pop();
        cout << u << " ";
        for(int v=1; v<= e ; ++v)
            if(graph[u][v] && !vst[v]){
                q.push(v);
                vst[v] = 1;
            }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        init();
        BFS(s);
    }
    return 0;
}

//copy by shincrab