/*
    Note:	nCr % p
    DP: tạo tam giác pascal
    VD: 4C3 <=> C(4,3)

    1==========>> n = 0, C(0, 0) = 1
    1–1========>> n = 1, C(1, 0) = 1, C(1, 1) = 1
    1–2–1======>> n = 2, C(2, 0) = 1, C(2, 1) = 2, C(2, 2) = 1
    1–3–3–1====>> n = 3, C(3, 0) = 1, C(3, 1) = 3, C(3, 2) = 3, C(3, 3)=1
    1–4–6–4–1==>> n = 4, C(4, 0) = 1, C(4, 1) = 4, C(4, 2) = 6, C(4, 3)=4, C(4, 4)=1
*/

#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;

void Init(){
    int n; cin >> n;
    int r; cin >> r;
    vector<vector<int>> pascal  (n + 5, vector<int>(n +5,0));
    for(int i =0 ; i<= n; ++i ){
        pascal[i][0] = 1;
    }
    for(int i=1; i <= n; ++i){
        for(int j=1; j <= i+1; ++j){
            pascal[i][j] = (pascal[i-1][j-1] % mod + pascal[i-1][j] % mod) % mod;
//            cout << pascal[i][j] <<"    ";
        }
    }
    cout << pascal[n][r] << endl;
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