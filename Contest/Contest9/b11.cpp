/*
    Note:	TÌM ĐƯỜNG ĐI THEO DFS VỚI ĐỒ THỊ VÔ HƯỚNG
*/

#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
typedef unsigned long long ull; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

int n , v , a[1001][1001] , f , l;
bool c[1001] , ok;
int e[1001];

void Init(){
    ok = false;
	cin >> n >> v >> f >> l;
	for(int i = 1 ; i <= n ; i++) for(int j = 1 ; j <= n ; j++) a[i][j] = 0;
	for(int i = 1 ; i <= n ; i++) c[i] = true;	
	int x , y;
	for(int i = 1 ; i <= v ; i++){
		cin >> x >> y;
		a[x][y] = 1;
		//a[y][x] = 1;
	}
}

void Proc(int f, int k){
    if(ok) return;
	e[k] = f;
	c[f] = false;
	if(f == l) {
		ok = true;
		for(int i = 1 ; i <= k ; i++) cout << e[i] << " ";
		return;
	}
	for(int i = 1 ; i <= n ; i++){
		if(c[i] && a[f][i] == 1) Proc(i,k+1);
	}
}

int main(){
    xxxxx
    int t=1, mul_test = 1		; if(mul_test) cin >> t;
    while(t--){
        Init();
        Proc(f,1);
        if(ok == false) cout << "-1";
	    cout << endl;
    }
    return 0;
}

/* ==> Shin <== */