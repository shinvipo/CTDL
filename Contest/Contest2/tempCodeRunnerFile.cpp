#include<bits/stdc++.h>
#define xxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long;

using namespace std;

int v, e, graph[101][101], vst[101] , dem , res;

void init(){
    dem = res = 0;
    cin >> v >> e;
    for(int i=0; i<=v; ++i)
        for(int j=0; j< v ; ++j)
            graph[i][j] = 0;

    for(int i= 1; i<= e ; ++i){
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        graph[tmp1][tmp2]=1;
        graph[tmp2][tmp1]=1;
    }
}

void dfs(int i , int d){
    res = max(d,res);
    for(int j = 0; j < v ; ++j)
        if(graph[i][j] && !vst[j]){
            vst[j] = 1;
            dfs(j,d+1);
            vst[j] = 0;
        }
}

int main(){
    xxx;
    init();
    for(int i = 0; i < v ; ++i){
        for(int i=0; i< e; ++i)
            vst[i] = 0;
        dem =0;
        vst[i] = 1;
        dfs(i,0);
    }
   cout <<res <<endl;
    return 0;
}