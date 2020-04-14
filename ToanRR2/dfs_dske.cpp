#include<bits/stdc++.h>
#include<iostream>
#define xxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long 

using namespace std;
const int N = 100005;

vector < int > ke[N];
bool vst[N];

void dfs(int u){
    int v ;
	cout << u << ' ';
	vst[u] = false; // da danh dau xet
	for(int i = 0 ;i < ke[u].size() ;i++){ // duyet danh sach ke
		v = ke[u][i];
		if ( vst[v] ) dfs(v);
	}
}

void solve(){
	int n , m , u;
	cin >> n  >> m >> u;
	for(int i = 0 ; i <= n ;i++) vst[i] = true;
	for(int i = 0 ; i < N ; i++) ke[i].clear();
	for(int i = 0 ; i < m ;i++){
		int a , b ;
		cin >> a >> b;
		ke[a].push_back(b);
		ke[b].push_back(a);
	}
	dfs(u);
}



int main(){
    xxx
    int t; cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}

//copy by shincrab