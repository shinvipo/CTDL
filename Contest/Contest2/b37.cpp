#include<bits/stdc++.h>
#define xxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long;

using namespace std;

int graph[101][101], vst[101][101] , v, e , res;

void init(){
    v = e = res = 0;
    cin >> v >> e;
    for(int i=0; i < v; ++i)
        for(int j =0; j< v; ++j){
            graph[i][j] = 0;
            vst[i][j] = 0;
        }

    for(int i=1; i <= e ; ++i){
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        graph[tmp1][tmp2]=1;
        graph[tmp2][tmp1]=1;
    }
}

void Try(int i , int d){
    res = max(res , d);
    
    for(int j=0 ; j < v ; ++j){
        if(!vst[i][j] && graph[i][j]){
            vst[i][j] = 1;
            vst[j][i] = 1;
            Try(j,d +1);
            vst[i][j] = 0;
            vst[j][i] = 0;
        }
    }
}

void Solution(){
    for(int i=0; i<= v; ++i)
        Try(i,0);
    cout << res << endl;
}

int main(){
    xxx;
    int t; cin >> t;
    while(t--){
        init();
        Solution();
    }
    return 0;
}