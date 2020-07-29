/*
    Note:	Longest Subsequnce Repeating Problem
*/

#include<bits/stdc++.h>
#include<iostream>
#define xxxxx ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll; 
typedef unsigned long long ull; 
const ll MAX = 1E7 + 5;
const ll mod = 1E9 + 7;
string a;
int n;
void Init(){
    cin >> n >> a;
    a = ' ' + a;
    vector< vector <int> > f (n+1,vector<int> (n+1 , 0));
    for (int i=1; i<=n; i++) for (int j=1; j<=n; j++)
    {
        if (a[i] == a[j] && i != j) f[i][j] = f[i-1][j-1] + 1;
        else f[i][j] = max(f[i-1][j], f[i][j-1]);
    }
    cout << f[n][n] <<endl;
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