/*
    Note:	Longest Common Subsequence <LCS>
*/

#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
typedef unsigned long long ull; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;
string a,b;
void Init(){
    cin >> a >> b;
    int m = a.size(), n = b.size();
    a = ' ' + a;
    b = ' ' + b;
    vector< vector<int> > f(m+1, vector<int>(n+1, 0));
    for (int i=1; i<=m; i++) for (int j=1; j<=n; j++)
    {
        if (a[i] == b[j]) f[i][j] = f[i-1][j-1] + 1;
        else f[i][j] = max(f[i-1][j], f[i][j-1]);
    }
    cout << f[m][n] <<endl;
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