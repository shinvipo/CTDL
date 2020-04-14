//Code By PMD
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define whatis(a) cout << #a " is " << (a) << endl;
#define pb push_back
using namespace std;
 
typedef long long i64;
const int N = 100005;
const i64 mod = 1e9+7;
const i64 inf = 1e18+7;
vector < int > ke[N];
bool chuaxet[1011];
void BFS(int u){
	queue < int > q;
	q.push(u);
	chuaxet[u] = false;
	while(!q.empty()){
		u = q.front() ; q.pop() ;     // ley dinh cua q;
		cout << u << ' ';
		for(int i = 0 ;i < ke[u].size() ;i++){ // duyet danh sach ke
			int v = ke[u][i];  // duyet cac dinh trong dach sach ke cua u;
			if ( chuaxet[v] ){
				//cout << v << ' ';
				chuaxet[v] = false;  // da xet v;
				q.push(v);
			}
		}
	}
}
void solve() {
	int n , m , u;
	cin >> n  >> m >> u; // so dinh , so canh , va dinh xet dau tien 
	memset(chuaxet, 1, sizeof(chuaxet));
	for(int i = 0 ; i < N ; i++) ke[i].clear();
	for(int i = 0 ; i < m ;i++){
		int a , b ;
		cin >> a >> b;
		ke[a].pb(b);	// push dinh b vao danh sach ke dinh a
		ke[b].pb(a);	// push dinh a vao danh sach ke dinh b
	}
	BFS(u);
}
main(){
	IOS;
	int t=1;
	cin>>t;
	while(t--){
		solve();
	}
}
//Code By PMD
 