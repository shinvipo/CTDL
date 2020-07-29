// sub arr equal K
#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;
int f[205][40005];
int n,sum;
void Init(){
    int n, s;
    cin >> n >> s;
    vector<int> a(n + 5);
    for (int i = 1 ; i <= n; i++) {
    	cin >> a[i];
    }
    f[0][0] = 1;
    for (int i = 1 ; i <= n; i++) {
    	for (int j = 1; j <= s; j++) {
    		if (a[i] <= j) f[i][j] = f[i - 1][j] | f[i - 1][j - a[i]];
    		else f[i][j] = f[i - 1][j];
    	}
    }
    cout << (f[n][s] ? "YES" : "NO");
    cout << endl;
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